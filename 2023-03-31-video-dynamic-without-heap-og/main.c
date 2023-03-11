#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char Group[100];
    char Key[100];
    char Value[100];
} IniItem;

void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}


void ReadIniFileWithCallback(const char *fileName,void(*func)(const char *, const char *, const char *, void *), void *payload){
    FILE *f=fopen(fileName,"r");
    char row[255];
    char currentGroup[255];
    while (fgets(row, sizeof(row), f) != NULL)  {
        removeChar(row,' ');
        removeChar(row,'\n');
        removeChar(row,'\r');
        if(row[0] == '[')
        {
            removeChar(row,'[');
            removeChar(row,']');
            strcpy(currentGroup,(const char *)row);
            continue;
        }
        char *part = strchr(row,'=');
        if(part == NULL) continue;
        int index = (int)(part - row);

        char value[100];
        memcpy(value, (const char *)row,index);
        value[index] = 0;
        func((const char *)currentGroup,(const char *)value, (const char *)part+1,payload);


    }

}


IniItem* 
ReadIniFile(const char *fileName, int *itemsCount)
{
    IniItem *ret = NULL;
    char row[255];
    char currentGroup[255];
    int cnt = 0;
    FILE *f=fopen(fileName,"r");
    
    while (fgets(row, sizeof(row), f) != NULL)  {
        removeChar(row,' ');
        removeChar(row,'\n');
        removeChar(row,'\r');
        if(row[0] == '[')
        {
            removeChar(row,'[');
            removeChar(row,']');
            strcpy(currentGroup,(const char *)row);
            continue;
        }
        char *part = strchr(row,'=');
        if(part == NULL) continue;
        int index = (int)(part - row);

        cnt++;
        if(ret == NULL)
            ret = malloc(sizeof(IniItem));
        else
            ret = realloc(ret, cnt * sizeof(IniItem));
        IniItem item;
        strcpy(ret[cnt-1].Group, (const char *)currentGroup);
        memcpy(ret[cnt-1].Key, (const char *)row,index);
        item.Key[index] = 0;
        strcpy(ret[cnt-1].Value, (const char *)part+1);

        
    }
    fclose(f);
    *itemsCount = cnt;
    return ret;

}




typedef struct {
    char DatabaseServer[100];
    char DatabaseUser[100];
    char DatabasePassword[100];
    char Database[100];
    char SmtpServer[100];
    char SmtpUser[100];
    char SmtpPassword[100];
    int SmtpPort;
}Configuration;


#define MATCH(s, n) strcmp(section, s) == 0 && strcmp(key, n) == 0

void 
iniValueCallback(const char *section, const char *key, const char *value, void *payload){
    Configuration* pConfig = (Configuration*)payload;    
    if (MATCH("Database", "Server")) {
        strcpy(pConfig->DatabaseServer, value);
    }
    if (MATCH("Database", "User")) {
        strcpy(pConfig->DatabaseUser, value);
    }
    if (MATCH("Database", "Password")) {
        strcpy(pConfig->DatabasePassword, value);
    }
    if (MATCH("Database", "Database")) {
        strcpy(pConfig->Database, value);
    }

}

void 
main(){
    Configuration config;
    ReadIniFileWithCallback("server.ini",iniValueCallback, &config);
    printf(config.Database);
}


// void 
// main(){
//     Configuration config;
//     int count;
//     IniItem *items = ReadIniFile("server.ini",&count);

//     for(int i = 0; i < count;i++)
//     {
//         if(strcmp(items[i].Group,"Database") == 0 && strcmp(items[i].Key,"Server") == 0)
//             config.DatabaseServer = strdup(items[i].Value);
//         if(strcmp(items[i].Group,"Database") == 0 && strcmp(items[i].Key,"User") == 0)
//             config.DatabaseUser = strdup(items[i].Value);
//         if(strcmp(items[i].Group,"Database") == 0 && strcmp(items[i].Key,"Password") == 0)
//             config.DatabasePassword = strdup(items[i].Value);
//         if(strcmp(items[i].Group,"Database") == 0 && strcmp(items[i].Key,"Database") == 0)
//             config.Database = strdup(items[i].Value);
//     }
//     free(items);
//     return;
// }