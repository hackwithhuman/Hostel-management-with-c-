#include <stdio.h>
#include <string.h>
#include <windows.h>
void welcome();
void student();
void options();

void mess();
void exitx();
void add_student();
void search_student();
void searchmember();
void addmessmember();

struct mess
{
  char fname[30];
  char lname[30];
  double mob;
  float sellary;
  char add[50];
} addm, search;

struct student
{
  char f_name[30];
  char l_name[30];
  char branch[30];
  int year;
  char room_num[20];
  int roll_number;
  double mob_number;
  char address[50];
  char email[30];

} new, update, detail;

int main()
{
  welcome();
  options();
}
void welcome()
{
  system("cls");
  system("color 9");

  int i;
  for (i = 1; i < 54; i++)
  {
    printf("=");
  }

  // this is for welcome interface in front of user for welcome
  printf("\n\n");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n");
   for (i = 1; i < 54; i++)
  {
    printf("=");
  }
  printf("\n\n\n\n\n\n\n\n\n");
  printf("             @created by  Sachin.\n\n\n");
  printf("Please Press Enter To Continue..........\n\n\n");
  printf("\n\n\n\n\n\n\n");

  getchar();
}

void options()

{

  system("cls");
  system("color a");
  int options;
  char op5;

  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n");

  printf("\n\n\n");

  printf("Please Choose Your Option to continue.......\n\n");
  printf("[1] For Mess.\n");
  printf("[2] For Student.\n");
  printf("[3] For Exit.\n");
  scanf("%d", &options);
  if (options == 1)
  {
    mess();
  }
  else if (options == 2)
  {
    student();
  }
  else if (options == 3)
  {
    exitx();
  }
  else if(options > 3)
  {
    printf("Please Enter Valied Option's\n\n");
    printf("Do You Want To Continue  Y/N ? \n");
    fflush(stdin);
    scanf("%c",&op5);
    
   if( op5 == 'y' || op5 == 'Y') {
      main();
    }
    
    
  }
  else {
    exitx();
  }
  
}
void exitx()
{
  system("cls");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n");

  printf("\n\n");

  printf("Thank You For Using Our Software .....\n  ");
  printf("\n\n\n\n\n");
  printf("\tCreated by Team Sachin \n");
}

void student()
{

  int sop;
  system("cls");
  system("color a");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN STUDENT INTERFACE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
  printf("\n\n\n");
  printf("Please Enter Your Options...\n");
  printf("1> For Add student.\n");
  printf("2> For search student details.\n");
  printf("3> For update.\n");
  scanf("%d", &sop);
  if (sop == 1)
  {
    add_student();
  }
  else if (sop == 2)
  {
    search_student();
  }
  else if (sop == 3)
  {
    printf("hj");
  }
  else
  {
    printf("Please Enter Vailed Options.. \n");
  }
}
void add_student()
{

  char ops;
  
  system("cls");
  system("color F");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n\n\n");

  printf("***********************************************\n");
  printf("   *** PLEASE PROVIDE VAILED DETAIL'S ***\n");
  printf("=============================================\n\n");

  printf("Enter the frist name : ");
  scanf("%s", new.f_name);
  printf("Enter the last name  : ");
  scanf("%s", new.l_name);

  printf("Enter branch         : ");
  scanf("%s", new.branch);

  printf("Enter year           : ");
  scanf("%d", &new.year);

  printf("Enter roll number    : ");
  scanf("%d", &new.roll_number);

  printf("Room number          : ");
  scanf("%s", new.room_num);

  printf("Enter contact number : ");
  scanf("%lf", &new.mob_number);

  printf("Enter address        : ");
  scanf("%s", new.address);

  printf("email                : ");
  scanf("%s", new.email);
  FILE *ptr;
  ptr = fopen("student.dat","a+");
  fprintf(ptr,"%s %s\n%s\n%d\n%d\n%s\n%.0lf\n%s\n%s\n\n",new.f_name,new.l_name,new.branch,new.year,new.roll_number,new.room_num,new.mob_number,new.address,new.email);
  fclose(ptr);

  
  fflush(stdin);
  
  printf("\n\n\n");
  printf("Student Added Successfully..\n\n\n");
  
  printf("Do You Want To Continue  Y/N ?\n");
  scanf("%c",&ops);

  if (ops == 'y' || ops == 'Y')
  {
    add_student();
  }
  else
  {
    printf(" **********Thank You************ ");
    exitx();
  }
  
}

void mess()
{

  int opsm;
  system("cls");
  system("color B");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n\n");
  printf("\n");
  printf("Please Enter Your option ..........\n\n");
  printf("[1] Add Member\n");
  printf("[2] Search Member\n");
  scanf("%d",&opsm);

  if (opsm == 1)
  {
    addmessmember();
  }
  else if (opsm == 2)
  {
    searchmember();
  }
  else
  {
    printf("Thankyou");
    exitx();
  }
}
void addmessmember()
{

  char opsc;
  struct mess m;
  system("cls");
  system("color 3");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n");
  printf("\n");
  printf("*******************************************************\n");
  printf("************ PLEASE PROVIDE VAILED DETAIL'S ***********\n");
  printf("=======================================================\n\n");
  printf("\n\n");
  printf("FRIST NAME : ");
  scanf("%s", m.fname);
  printf("LAST NAME  : ");
  scanf("%s", m.lname);
  printf("MOB.NO     : ");
  scanf("%lf", &m.mob);
  printf("ADDRESS    : ");
  scanf("%s", m.add);

  printf("SALLARY    : ");
  scanf("%f", &m.sellary);
  printf("\n\n");

  system("cls");
  system("color 3");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("\tRama University Kanpur Uttar Pradesh\n");
  printf("\n\n\n\n\n\n\n");

  printf("Employee Added Sucessfully .....\n");

  printf("\n");

  fflush(stdin);

  printf("Do You Want To Add Another Employ Y/N ? \n");
  scanf("%c", &opsc);

  if (opsc == 'y' || opsc == 'Y')
  {
    addmessmember();
  }
  else
  {
    exitx();
  }

  FILE *mptr;

  mptr = fopen("mess.dat", "a+");

  fprintf(mptr, "%s %s\n%.0lf\n%s\n%f\n\n", m.fname, m.lname, m.mob, m.add, m.sellary);
  printf("\n\n");

  fclose(mptr);
}

void search_student()
{
  int seeop;
  int op1;
  char op4, op3, op5;
  int test = 0;
  FILE *studentptr;
  studentptr = fopen("student.dat", "r");
  printf("Please Enter Your option to continue..\n\n");
  printf("[1] By Room No.  \n");
  printf("[2] By Name \n");
  printf("[3] By Roll No.\n");
  scanf("%d", &seeop);

  if(seeop == 1)
  {

    printf("\n\n");
    printf("Enter Room No. : \n");
    scanf("%s", detail.room_num);

    while(fscanf(studentptr, "%s %s %s %d %d %s %lf %s %s", new.f_name, new.l_name, new.branch, &new.year, &new.roll_number, new.room_num, &new.mob_number, new.address, new.email) != EOF)
    {

      printf("detail are\n");
      if(strcmpi(new.room_num, detail.room_num) == 0)
      {
        test = 1;
        system("cls");

        printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n");
        printf("\tRama University Kanpur Uttar Pradesh\n");

        printf("\nSTUDENT NAME : %s %s", new.f_name, new.l_name);
        printf("\nBRANCH       : %s", new.branch);
        printf("\nYEAR         : %d", new.year);
        printf("\nROLL NO.     : %ld", new.roll_number);
        printf("\nROOM NO.     : %s", new.room_num);
        printf("\nMOB NO.      : %s", new.mob_number);
        printf("\nEMAIL ID     : %s", new.email);
        printf("\nADDRESS      : %s", new.address);
        printf("\n\n\n");
        fflush(stdin);
        printf("Do You Want To Continue Y/N ?\n");
        scanf("%c", &op4);
        if (op4 == 'y' || op4 == 'Y')
        {
          options();
        }

        else
        {
          exitx();
        }
      }
    }
  }

  else if(seeop == 2)
  {
    printf("Enter Frist : ");
    scanf("%s", detail.f_name);
    printf("Enter Last Name : ");
    scanf("%s", detail.l_name);

    while(fscanf(studentptr, "%s %s %s %d %d %s %lf %s %s", new.f_name, new.l_name, new.branch, &new.year, &new.roll_number, new.room_num, &new.mob_number, new.address, new.email) != EOF)
    {

      if(strcmpi(new.f_name, detail.f_name) == 0)
      {
        if(strcmpi(new.l_name, detail.l_name) == 0)
        {

          system("cls");
          printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
          printf("\n\n");
          printf("\tRama University Kanpur Uttar Pradesh\n");

          printf("\nSTUDENT NAME : %s %s", new.f_name, new.l_name);
          printf("\nBRANCH       : %s", new.branch);
          printf("\nYEAR         : %d", new.year);
          printf("\nROLL NO.     : %ld", new.roll_number);
          printf("\nROOM NO.     : %s", new.room_num);
          printf("\nMOB NO.      : %s", new.mob_number);
          printf("\nEMAIL ID     : %s", new.email);
          printf("\nADDRESS      : %s", new.address);

          printf("\n\n\n");

          fflush(stdin);

          printf("Do You Want To Continue Y/N ?\n");
          scanf("%c", &op3);
        }
        if (op3 == 'y' || op3 == 'Y')
        {
          options();
        }
        else
        {
          exitx();
        }
      }
    }
  }
  else if (seeop == 3)
  {

    printf("WE ARE WORKING FOR THAT\n");
  }
  else
  {
    printf("Invailed option....\n");
    printf("Do You Want To Continue Y/N .. ?\n\n");
    scanf("%c", &op5);
    if (op5 == 'Y' || op5 == 'y')
    {
      search_student();
    }
    else
    {
      exitx();
    }
  }
}

void searchmember()
{
  system("cls");
  int a;
  char ch, op9, op7, op10;

  FILE *mess;
  mess = fopen("mess.dat", "r");

  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\n");
  printf("Welcome In  Mess Interface \n\n");

  printf("Enter Option's\n\n");
  printf("[1] By Name \n");
  printf("[2] By Mob No.  \n");

  fflush(stdin);
  scanf("%d", &a);

  if (a == 1)
  {
    system("cls");
    printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n");
    printf("\t\tWelcome In  Mess Interface \n\n");

    printf("Enter Name : ");
    scanf("%s %s", search.fname, search.lname);

    while (fscanf(mess, "%s %s %lf %s %f", addm.fname, addm.lname, &addm.mob, addm.add, &addm.sellary) != EOF)
    {
      // fflush(stdin);
      if (strcmpi(addm.fname, search.fname) == 0)
      {
        if (strcmpi(addm.lname, search.lname) == 0)
        {

          system("cls");
          printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
          printf("\n\n");
          printf("\tWelcome In  Mess Interface \n\n");

          printf("details Are ......\n\n");
          printf("\nNAME    : %s %s", addm.fname, addm.lname);
          printf("\nMob No  : %0.lf", addm.mob);
          printf("\nAddress : %s", addm.add);
          printf("\nSALLARY : %f", addm.sellary);

          printf("\n\n");

          printf("Do Ypou Want To Continue Y/N ?\n");
          scanf("%c", &ch);

          if (ch == 'y' || ch == 'Y')
          {
            options();
          }
          else

          {
            exitx();
          }
        }
      }
    }
   fclose(mess);
  }
  else if (a == 2)
  {
    FILE *ptrx;
  ptrx = fopen("mess.txt", "r");
    system("cls");
    printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n");
    printf("\t\tWelcome In  Mess Interface \n\n");
    fflush(stdin);
    printf("Enter MOb No. : ");
    scanf("%lf", &search.mob);

    while (fscanf(mess, "%s %s %lf %s %f", addm.fname, addm.lname, &addm.mob, addm.add, &addm.sellary) != EOF)

    {
      if(addm.mob == search.mob)
      {

        system("cls");
        printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n");
        printf("\t\tWelcome In  Mess Interface \n\n");

        printf("details Are ......\n\n");
        printf("\nNAME    : %s %s", addm.fname, addm.lname);
        printf("\nMob No  : %0.lf", addm.mob);
        printf("\nAddress : %s", addm.add);
        printf("\nSALLARY   : %f", addm.sellary);

        printf("\n\n");

        printf("Do You Want To Continue Y/N :");
        scanf("%c", &op9);
        if (op9 == 'y' || op9 == 'Y')
        {
          options();
        }
        else
        {
          exitx();
        }
      }
      else
      {
        system("cls");
        printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME IN RAMAN HOUSE \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n");
        printf("\t\tWelcome In  Mess Interface \n\n\n");
        printf("Record Not Found\n");
        printf("Please Enter Valid Mob No.\n");

        printf("Do You Want To Continue Y/N ?");
        scanf("%c", &op7);
        if (op7 == 'y' || op7 == 'Y')
        {
          options();
        }
        else
        {
          exitx();
        }
      }
    }
     fclose(ptrx);
  }
  else
  {

    system("cls");
    printf("Record Not Found\n");
    printf("Please Valid Enter Name\n");
    printf("Do You Want To Continue Y/N : ");
    scanf("%c", &op10);
    if (op10 == 'y' || op10 == 'Y')
    {
      searchmember();
    }
    else
    {
      exitx();
    }

  }
}
