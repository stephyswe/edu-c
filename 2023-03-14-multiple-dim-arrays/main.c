#include <stdio.h>
#include <string.h>

typedef struct
{
    char MatteResultat;
    char SvenskaResultat;
    char EngelskaResultat;
    char DanskaResultat;
    char GeografiResultat;
    char namn[100];
} StudentGrade;

int getGradePoints(char grade)
{
    if (grade == 'i' || grade == 'I')
        return 0;
    if (grade == 'g' || grade == 'G')
        return 50;
    if (grade == 'm' || grade == 'M')
        return 100;
    return 0;
}

void todaydemoStruct()
{
    StudentGrade studenter[3];
    for (int row = 0; row < 3; row++)
    {
        printf("Vad heter studenten:");
        scanf(" %s", studenter[row].namn);

        studenter[row].MatteResultat = inputResult("Matte");
        studenter[row].SvenskaResultat = inputResult("Svenska");
        studenter[row].DanskaResultat = inputResult("Danska");
        studenter[row].EngelskaResultat = inputResult("Engelska");
        studenter[row].GeografiResultat = inputResult("Geografi");
        // printf("Ang resultat för kurs Matte:");
        // scanf(" %c", &studenter[row].MatteResultat);

        // printf("Ang resultat för kurs Svenska:");
        // scanf(" %c", &studenter[row].SvenskaResultat);

        // printf("Ang resultat för kurs Engelska:");
        // scanf(" %c", &studenter[row].EngelskaResultat);

        // printf("Ang resultat för kurs Danska:");
        // scanf(" %c", &studenter[row].DanskaResultat);

        // printf("Ang resultat för kurs Geografi:");
        // scanf(" %c", &studenter[row].GeografiResultat);
    }

    for (int row = 0; row < 3; row++)
    {
        float sum = 0;
        sum += getGradePoints(studenter[row].DanskaResultat);
        sum += getGradePoints(studenter[row].EngelskaResultat);
        sum += getGradePoints(studenter[row].GeografiResultat);
        sum += getGradePoints(studenter[row].MatteResultat);
        sum += getGradePoints(studenter[row].SvenskaResultat);
        printf("Medelbetyg student %s är %.2f", studenter[row].namn, sum / 5);
    }
}

void todayYearAndMonthTemps()
{
#define NUM_YEARS 5
#define NUM_MONTHS 12

    // Initialize the array with years and months
    int years[NUM_YEARS] = {2018, 2019, 2020, 2021, 2022};
    char *months[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December"};

    // Initialize a two-dimensional array to store temperature data
    double temperatures[NUM_YEARS][NUM_MONTHS];

    // Input average temperatures for each year and month
    for (int i = 0; i < NUM_YEARS; i++)
    {
        printf("Enter average temperatures for year %d:\n", years[i]);

        for (int j = 0; j < NUM_MONTHS; j++)
        {
            printf("%s: ", months[j]);
            scanf("%lf", &temperatures[i][j]);
        }
    }

    // Print out the temperature data in a table
    printf("Temperature data:\n");
    printf("Year\t");
    for (int j = 0; j < NUM_MONTHS; j++)
    {
        printf("%s\t", months[j]);
    }
    printf("\n");

    for (int i = 0; i < NUM_YEARS; i++)
    {
        printf("%d\t", years[i]);
        for (int j = 0; j < NUM_MONTHS; j++)
        {
            printf("%.1f\t", temperatures[i][j]);
        }
        printf("\n");
    }
}

#define STUDENTER 2
#define COURSES 5
#define COURSES_MATH 0
#define COURSES_SWEDISH 1
#define COURSES_ENGLISH 2
#define COURSES_DANISH 3
#define COURSES_GEOGRAPHY 4

void todaysdemo()
{
    // tvådimensionell array  bygg ett betygsregister
    // Kurs Matte	Kurs svenska	Kurs Engelska	Kurs danska	Kurs Geografi
    // Kalle Lisa Nisse Maria

    char studentGrades[STUDENTER][COURSES];
    studentGrades[2][COURSES_DANISH] = 'G';
    studentGrades[0][COURSES_SWEDISH] = 'I';

    for (int row = 0; row < STUDENTER; row++)
    {
        printf("Student %d\n", row + 1);
        for (int col = 0; col < COURSES; col++)
        {
            printf("Ang resultat för kurs %d:", col + 1);
            scanf(" %c", &studentGrades[row][col]);
        }
    }
    // I = 0, G = 50, M = 100
    for (int row = 0; row < STUDENTER; row++)
    {
        float sum = 0;
        for (int col = 0; col < COURSES; col++)
        {
            char grade = studentGrades[row][col];
            if (grade == 'i' || grade == 'I')
                sum += 0;
            else if (grade == 'g' || grade == 'G')
                sum += 50;
            else if (grade == 'm' || grade == 'M')
                sum += 100;
        }
        printf("Medelbetyg student %d är %.2f", row + 1, sum / COURSES);
    }

    // dagens tröst/peptalk
    // koda om som enkel array fast med structs
}

#define WEEK 2
#define DAY 7

void temps()
{
    float temperatures[WEEK][DAY];

    // temperatures[0][0] = 12.3;
    // temperatures[25][2] = 19.4;

    for (int weekNo = 0; weekNo < WEEK; weekNo++)
    {
        printf("vecka:%d\n", weekNo);
        for (int day = 0; day < DAY; day++)
        {
            printf("Week %d, Day %d: ", weekNo + 1, day + 1);
            scanf(" %f", &temperatures[weekNo][day]);
        }
    }
}

#define CITY 3
void temps2()
{
    float temperatures[CITY][WEEK][DAY];

    // temperatures[0][0] = 12.3;
    // temperatures[25][2] = 19.4;
    for (int cityNo = 0; cityNo < CITY; cityNo++)
    {
        printf("CITY:%d\n", cityNo + 1);
        for (int weekNo = 0; weekNo < WEEK; weekNo++)
        {
            printf("vecka:%d\n", weekNo + 1);
            for (int day = 0; day < DAY; day++)
            {
                printf("Week %d, Day %d: ", weekNo + 1, day + 1);
                scanf(" %f", &temperatures[cityNo][weekNo][day]);
            }
        }
    }
}

// 1.tvådimensionell shackbräde
// 2. temperaturer veckans alla dar - för många veckor
// 3. Vi snyggar till med: DEFINE
// 4. Tre olika städer också - three dimensional

#define WEEK 2
#define DAY 7

void temps()
{
    float temperatures[WEEK][DAY];

    // temperatures[0][0] = 12.3;
    // temperatures[25][2] = 19.4;

    for (int weekNo = 0; weekNo < WEEK; weekNo++)
    {
        printf("vecka:%d\n", weekNo);
        for (int day = 0; day < DAY; day++)
        {
            printf("Week %d, Day %d: ", weekNo + 1, day + 1);
            scanf(" %f", &temperatures[weekNo][day]);
        }
    }
}

#define CITY 3
void temps2()
{
    float temperatures[CITY][WEEK][DAY];

    // temperatures[0][0] = 12.3;
    // temperatures[25][2] = 19.4;
    for (int cityNo = 0; cityNo < CITY; cityNo++)
    {
        printf("CITY:%d\n", cityNo + 1);
        for (int weekNo = 0; weekNo < WEEK; weekNo++)
        {
            printf("vecka:%d\n", weekNo + 1);
            for (int day = 0; day < DAY; day++)
            {
                printf("Week %d, Day %d: ", weekNo + 1, day + 1);
                scanf(" %f", &temperatures[cityNo][weekNo][day]);
            }
        }
    }
}

int main()
{
    todaydemoStruct();
    todaysdemo();
    temps2();
    int c[2][3] = {
        {1, 3, 0},
        {-1, 5, 9}};
    printf("%d", c[0][0]);
    // int c2[2][3] = {1, 3, 0, -1, 5, 9};

    temps();
    // rad 5 col 4
    char chessBoard[8][8]; // row * antal col + col

    //    char chessBoard[64];

    memset(chessBoard, ' ', 64);
    //            rows cols
    /*
        [0][0]    [0][1]    [0][2]    [0][3]   [0][4]   [0][5]   [0][6]   [0][7]
        [1][0]    [1][1]    [1][2]    [1][3]   [1][4]   [1][5]   [1][6]   [1][7]
        [2][0]    [2][1]    [2][2]    [2][3]   [2][4]   [2][5]   [2][6]   [2][7]
        [3][0]    [3][1]    [3][2]    [3][3]   [3][4]   [3][5]   [3][6]   [3][7]
        [4][0]    [4][1]    [4][2]    [4][3]   [4][4]   [4][5]   [4][6]   [4][7]
        [5][0]    [5][1]    [5][2]    [5][3]   [5][4]   [5][5]   [5][6]   [5][7]
        [6][0]    [6][1]    [6][2]    [6][3]   [6][4]   [6][5]   [6][6]   [6][7]
        [7][0]    [7][1]    [7][2]    [7][3]   [7][4]   [7][5]   [7][6]   [7][7]
    */
    chessBoard[0][0] = 'T'; // Torn;
    chessBoard[0][7] = 'T'; // Torn;
    chessBoard[0][1] = 'H'; // Horse;
    chessBoard[0][6] = 'H'; // Horse;
    chessBoard[0][2] = 'L'; // Löpare
    chessBoard[0][5] = 'L'; // Löpare
    chessBoard[0][3] = 'K'; // Kung
    chessBoard[0][4] = 'D'; // Dam
    chessBoard[1][0] = 'b'; // bonde
    chessBoard[1][1] = 'b'; // bonde
    chessBoard[1][2] = 'b'; // bonde
    chessBoard[1][3] = 'b'; // bonde
    chessBoard[1][4] = 'b'; // bonde
    chessBoard[1][5] = 'b'; // bonde
    chessBoard[1][6] = 'b'; // bonde
    chessBoard[1][7] = 'b'; // bonde

    chessBoard[7][0] = 'T'; // Torn;
    chessBoard[7][7] = 'T'; // Torn;
    chessBoard[7][1] = 'H'; // Horse;
    chessBoard[7][6] = 'H'; // Horse;
    chessBoard[7][2] = 'L'; // Löpare
    chessBoard[7][5] = 'L'; // Löpare
    chessBoard[7][4] = 'K'; // Dam
    chessBoard[7][3] = 'D'; // Kung

    chessBoard[6][0] = 'b'; // bonde
    chessBoard[6][1] = 'b'; // bonde
    chessBoard[6][2] = 'b'; // bonde
    chessBoard[6][3] = 'b'; // bonde
    chessBoard[6][4] = 'b'; // bonde
    chessBoard[6][5] = 'b'; // bonde
    chessBoard[6][6] = 'b'; // bonde
    chessBoard[6][7] = 'b'; // bonde

    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            printf("%c ", chessBoard[row][col]);
        }
        printf("\n");
    }
}
