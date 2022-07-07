# Quiz Notes Week 4

## Arrays (page 380)

One Dimensional Array

```c++
int main()
{
    int total = 0;
    double avg;
    int grades [NUM_GRADES];
    int index;

    for (index = 0; index < NUM_GRADES; ++index)
    {
        cout << "Enter your grade: ";
        cin >> grade[index];
    }

    return 0;
}
```

Two Dimensional Array (page 426)
    stores rows and columns of data
    <data type> <id> [rows] [columns]

```c++

int hours[4][6];

int row; int col;

for (row=0; row<4;++row)
{
    for (col=0; col<6; ++col)
    {
        cout << setw(4) << hours [row][col];
    }
    cout << endl;
}

```

## Character I/O 
    input streams can read a single char with a "get" member function

```c++
int main()
{
    char myChar;
    inFile.get(myChar); //reads one character
    cin.get(myChar);
    cout << myChar;
    outfile.put(myChar); //writes one character
    cout.put(myChar)
}
```


## Character Arrays(page 455)
    can initalize with string
    
```c++
int main()
{
    char charBuff[13] = "Hello there!";

    int index;
    for(index = 0; index < 13; ++index)
    {
        cout << charBuff[index] << endl;
    }



    cin.getline(charBuff,256); // reads up to \n
}
```

c-string functions
strlen(asdf)            returns length of asdf
strcat(target,asdf)     adds asdf to target
strcmp(1,2)             returns 0 if same, returns < 0 if 1 < 2, returns > 0 if 1 > 2
strcpy(target,asdf)     copies asdf into target




## Structures (pg 544)

```c++
struct Date
{
    int month;
    int day;
    int year;
};

Date CalcNextDay (Date dateVal)

int main()
{
    Date myDate;
    myDate.month = 10;
    myDate.day = 23;
    myDate.year = 2021;
}

Date CalcNextDate(Date dateVal)
{
    return dateVal;
}
```

Structure Initialization (pg 553)

```c++
int main()
{
    Car myCar = {"Tesla", "Model Y", 125};
}
```

Array of Structures (pg 662)

```c++
int main()
{
    Date bdays[25];
}
```




## Switch Statements (pg 128)

```c++
char grade;
cin >> grade;
switch (grade)
{
    case 'A':
        cout << "excellent";
        break;
    case 'B' :
        cout << "good";
        break;
    default:
        cout << "error";

}