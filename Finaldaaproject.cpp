//////////INDIA//////////
#include<iostream>
#include<stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int sel_des;
int d,m,y;
int d1,m1,y1;

void destination();
void tajMahal();         // 1. Taj Mahal, Agra
/////////////
void jaipur();           // 2. Jaipur, Rajasthan
void varanasi();         // 3. Varanasi, Uttar Pradesh
////////////////////
void lehLadakh();        // 4. Leh-Ladakh, Jammu & Kashmir
void goa();              // 5. Goa
void kerala();           // 6. Kerala Backwaters
void mysore();           // 7. Mysore, Karnataka
void rishikesh();        // 8. Rishikesh, Uttarakhand
void amritsar();         // 9. Amritsar, Punjab
void hampi();            // 10. Hampi, Karnataka
void shimla();           // 11. Shimla, Himachal Pradesh
void manali();           // 12. Manali, Himachal Pradesh
void udaipur();          // 13. Udaipur, Rajasthan
void darjeeling();       // 14. Darjeeling, West Bengal
void andamanNicobar();   // 15. Andaman and Nicobar Islands
void ranthambore();      // 16. Ranthambore National Park, Rajasthan
void kolkata();          // 17. Kolkata, West Bengal
void jaisalmer();        // 18. Jaisalmer, Rajasthan
void kashmirValley();    // 19. Kashmir Valley, Jammu & Kashmir
void khajuraho();        // 20. Khajuraho, Madhya Pradesh
void meghalaya();        // 21. Meghalaya (Shillong & Cherrapunji)
void coorg();            // 22. Coorg, Karnataka
void ajantaEllora();     // 23. Ajanta and Ellora Caves, Maharashtra
void rajasthanDesert();  // 24. Rajasthan Desert (Jodhpur)
void sundarbans();       // 25. Sundarbans, West Bengal
void print_details();
void print_ticket(int [],int);
void input(int,int );
int check(int);
void flights(int );
void hotels();
void int_destination();
void paris();
void newYork();
void london();
void sydney();
void dubai();
void tokyo();
void bangkok();
void singapore();
void rome();
void berlin();
void losAngeles();
void amsterdam();
void capeTown();
void seoul();
void kualaLumpur();
void istanbul();
void barcelona();
void santiago();
void mexicoCity();
void int_print_details();
void int_print_ticket(int [], int);
void int_input(int, int);
int int_check(int);
void int_flights(int);
void int_hotels();
int menu();
int int_menu();
void national();
void national()
{
    void destination();
    void tajMahal();         // 1. Taj Mahal, Agra
    void jaipur();           // 2. Jaipur, Rajasthan
    void varanasi();         // 3. Varanasi, Uttar Pradesh
    void lehLadakh();        // 4. Leh-Ladakh, Jammu & Kashmir
    void goa();              // 5. Goa
    void kerala();           // 6. Kerala Backwaters
    void mysore();           // 7. Mysore, Karnataka
    void rishikesh();        // 8. Rishikesh, Uttarakhand
    void amritsar();         // 9. Amritsar, Punjab
    void hampi();            // 10. Hampi, Karnataka
    void shimla();           // 11. Shimla, Himachal Pradesh
    void manali();           // 12. Manali, Himachal Pradesh
    void udaipur();          // 13. Udaipur, Rajasthan
    void darjeeling();       // 14. Darjeeling, West Bengal
    void andamanNicobar();   // 15. Andaman and Nicobar Islands
    void ranthambore();      // 16. Ranthambore National Park, Rajasthan
    void kolkata();          // 17. Kolkata, West Bengal
    void jaisalmer();        // 18. Jaisalmer, Rajasthan
    void kashmirValley();    // 19. Kashmir Valley, Jammu & Kashmir
    void khajuraho();        // 20. Khajuraho, Madhya Pradesh
    void meghalaya();        // 21. Meghalaya (Shillong & Cherrapunji)
    void coorg();            // 22. Coorg, Karnataka
    void ajantaEllora();     // 23. Ajanta and Ellora Caves, Maharashtra
    void rajasthanDesert();  // 24. Rajasthan Desert (Jodhpur)
    void sundarbans();       // 25. Sundarbans, West Bengal
    void print_details();
    void print_ticket(int [],int);
    void input(int,int );
    int check(int);
    void flights(int );
    void hotels();
    int menu();
}
/////////////////////////////////////////////////////

void international()
{
    void int_destination();
    void paris();
    void newYork();
    void london();
    void sydney();
    void dubai();
    void tokyo();
    void bangkok();
    void singapore();
    void rome();
    void berlin();
    void losAngeles();
    void amsterdam();
    void capeTown();
    void seoul();
    void kualaLumpur();
    void istanbul();
    void barcelona();
    void santiago();
    void mexicoCity();
    void int_print_details();
    void print_ticket(int [], int);
    void int_input(int, int);
    int int_check(int);
    void int_flights(int);
    void int_hotels();
    int int_menu();
}

///////////////////////////////////////////////////////////
struct info
{
    int age;
    int cost;
    int days;
    char hname[30];
    char destination[15];
    char name[30];
    char gender;
    float time;
    char fname[30];
    char shift[2];
} i;


void print_details()
{
    system("cls");
    int id,no,flag=0;
    printf("\n\t TRAVELLERS DETAILS :\n");
    printf(" \nENTER ID OF THE PERSON YOU ARE SEARCHING FOR :  ");
    scanf("%d", &id);
    FILE *f;
    f=fopen("info.txt", "r");
    while (!feof(f))
    {
        fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);

        if(id==no)
        {
            printf("\n\n\tID : %d",no);
            printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
            printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
            printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
            printf("\n\tDESTINATION : %s",i.destination);
            printf("\n\tFLIGHT NAME : %s",i.fname);
            printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
            printf("\nPress enter to continue .....");
            flag=1;
        }
        if(flag==1)
            break;
    }
    fclose(f);
    if(flag==0)
    {
        printf("\nNo bill exists.");
        printf("\nPress enter to continue .....");

    }
}


void print_ticket(int a[],int cnt)
{
    system("cls");
    int z,no,flag;
    FILE *f;
    printf("\n\n\t YOUR TICKET:");
    for(z=0; z<cnt; ++z)
    {
        flag=0;
        f=fopen("info.txt", "r");
        while (!feof(f))
        {
            fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);
            if(a[z]==no)
            {
                printf("\n\n\tID : %d",no);
                printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
                printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
                printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
                printf("\n\tDESTINATION : %s",i.destination);
                printf("\n\tFLIGHT NAME : %s",i.fname);
                printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
                flag=1;
            }
            if(flag==1)
                break;
        }
        fclose(f);
    }
    printf("\n\n\t\tTOTAL COST : %ld",i.cost);
    printf("\n\n\t\tBOOKING SUCCESSFULL");
    printf("\n\n\t\t   press enter to go to main menu .....");
    getchar();
    menu();
}


int check(int id)
{
    int fi;
    FILE *f1;

    f1=fopen("checkid.txt","w");

    fclose(f1);

    FILE *f;
    f=fopen("checkid.txt","r+");
    while(!feof(f))
    {
        fscanf(f,"%d",&fi);
        if(fi==id)
        {
            printf("\n\t ID ALDREADY EXISTS!) !\n\t CHOOSE ANOTHER ID :\n");
            return 1;
        }
    }
    fclose(f);
    return 0;
}


void input(int cnt,int cno)
{
    int a[cnt];
    int pos=0,res;
    switch(cno)
    {

    case 1:
        strcpy(i.destination, "TAJ_MAHAL");
        break;
    case 2:
        strcpy(i.destination, "JAIPUR");
        break;
    case 3:
        strcpy(i.destination, "VARANASI");
        break;
    case 4:
        strcpy(i.destination, "LEH_LADAKH");
        break;
    case 5:
        strcpy(i.destination, "GOA");
        break;
    case 6:
        strcpy(i.destination, "KERALA");
        break;
    case 7:
        strcpy(i.destination, "MYSORE");
        break;
    case 8:
        strcpy(i.destination, "RISHIKESH");
        break;
    case 9:
        strcpy(i.destination, "AMRITSAR");
        break;
    case 10:
        strcpy(i.destination, "HAMPI");
        break;
    case 11:
        strcpy(i.destination, "SHIMLA");
        break;
    case 12:
        strcpy(i.destination, "MANALI");
        break;
    case 13:
        strcpy(i.destination, "UDAIPUR");
        break;
    case 14:
        strcpy(i.destination, "DARJEELING");
        break;
    case 15:
        strcpy(i.destination, "ANDAMAN_NICOBAR");
        break;
    case 16:
        strcpy(i.destination, "RANTHAMBORE");
        break;
    case 17:
        strcpy(i.destination, "KOLKATA");
        break;
    case 18:
        strcpy(i.destination, "JAISALMER");
        break;
    case 19:
        strcpy(i.destination, "KASHMIR_VALLEY");
        break;
    case 20:
        strcpy(i.destination, "KHAJURAHO");
        break;
    case 21:
        strcpy(i.destination, "MEGHALAYA");
        break;
    case 22:
        strcpy(i.destination, "COORG");
        break;
    case 23:
        strcpy(i.destination, "AJANTA_ELLORA");
        break;
    case 24:
        strcpy(i.destination, "RAJASTHAN_DESERT");
        break;
    case 25:
        strcpy(i.destination, "SUNDARBANS");
        break;
    default:
        printf("\nInvalid choice! Please try again.\n");
        break;
    }


    int x=0,id;
    while(x<cnt)
    {
        system("cls");
        printf("\n\t\t ENTER %d PERSON DETAILS",x+1);
a:
        printf("\n\n\t     CHOOSE YOUR TRAVEL ID (1-100) : ");
        scanf("%d",&id);
        res=check(id);
        if(res==1)
            goto a;
        printf("\n\t    ENTER  NAME , AGE , GENDER (M/F)  :\n\n");
        FILE *f;
        f=fopen("info.txt","a+");
        printf("\t    ");
        scanf("%s", &i.name);
        printf("\t    ");
        scanf("%d",&i.age);
        printf("\t    ");
        getchar();
        i.gender=getchar();
        printf("\n\n\t\t   press enter to continue .....");
        getchar();
        getchar();
        flights(id);
        hotels();
        fprintf(f,"%d %s %d %c %d %s %s %f %s ",id,i.name,i.age,i.gender,i.cost,i.destination,i.fname,i.time,i.shift);
        fprintf(f," %d %d %d %d %d %d %s\n",d,m,y,d1,m1,y1,i.hname);
        fclose(f);
        a[x]=id;
        ++x;
    }
    print_ticket(a,cnt);
}

void hotels()
{
    int n;

    system("cls");
    printf("\n\t\t HOTELS :");
    printf("\n\n\t1. TAJ MAHAL PALACE MUMBAI\t PRICE : 35,000 PER DAY");
    printf("\n\n\t2. OBEROI UDAIVILAS, UDAIPUR\t PRICE : 40,000 PER DAY");
    printf("\n\n\t3. THE RITZ-CARLTON, BANGALORE\t PRICE : 25,000 PER DAY");
    printf("\n\n\t4. ITC MAURYA, NEW DELHI\t PRICE : 28,000 PER DAY");
    printf("\n\n\t5. THE LEELA PALACE, BENGALURU\t PRICE : 30,000 PER DAY");

    printf("\n\n\t6. THE OBEROI, NEW DELHI\t PRICE : 22,000 PER DAY");
    printf("\n\n\t7. JW MARRIOTT, MUMBAI\t PRICE : 24,000 PER DAY");
    printf("\n\n\t8. AMANBAGH, RAJASTHAN\t PRICE : 45,000 PER DAY");
    printf("\n\n\t9. ANANDA IN THE HIMALAYAS\t PRICE : 32,000 PER DAY");
    printf("\n\n\t10. THE TAJ EXOTICA, GOA\t PRICE : 38,000 PER DAY");

    printf("\n\n\t11. TATA BIRLA PALACE, KOLKATA\t PRICE : 27,000 PER DAY");
    printf("\n\n\t12. PARK HYATT, CHENNAI\t PRICE : 23,000 PER DAY");
    printf("\n\n\t13. LE MERIDIEN, JAIPUR\t PRICE : 26,000 PER DAY");
    printf("\n\n\t14. WILDERNESS RESORT, MYSORE\t PRICE : 35,000 PER DAY");
    printf("\n\n\t15. THE KUMARAKOM LAKE RESORT, KERALA\t PRICE : 28,000 PER DAY");

    printf("\n\n\t16. THE IMPERIAL, NEW DELHI\t PRICE : 27,000 PER DAY");
    printf("\n\n\t17. EROS HOTEL, NEW DELHI\t PRICE : 22,000 PER DAY");
    printf("\n\n\t18. RAJMAHAL PALACE, JAIPUR\t PRICE : 40,000 PER DAY");
    printf("\n\n\t19. FORT RAJMAHAL, JODHPUR\t PRICE : 33,000 PER DAY");
    printf("\n\n\t20. THE KEMPINSKI HOTEL, NEW DELHI\t PRICE : 34,000 PER DAY");

    printf("\n\n\t21. PALACE COURT, UDAIPUR\t PRICE : 42,000 PER DAY");
    printf("\n\n\t22. THE GRAND, NEW DELHI\t PRICE : 31,000 PER DAY");
    printf("\n\n\t23. TAJ FALAKNUMA PALACE, HYDERABAD\t PRICE : 55,000 PER DAY");
    printf("\n\n\t24. TAJ LAKE PALACE, UDAIPUR\t PRICE : 50,000 PER DAY");
    printf("\n\n\t25. VIVANTA BY TAJ, PUNE\t PRICE : 30,000 PER DAY");

    printf("\n\n\t ENTER CHOICE :  ");
    scanf("%d", &n);
    printf("\n\n\t ENTER NO OF DAYS : ");
    scanf("%d",&i.days);
    switch (n)
    {

    case 1:
        i.cost += i.days * 5000;
        strcpy(i.hname, "INDIGO_AIRLINES");
        break;
    case 2:
        i.cost += i.days * 6000;
        strcpy(i.hname, "AIR_INDIA");
        break;
    case 3:
        i.cost += i.days * 5500;
        strcpy(i.hname, "SPICEJET");
        break;
    case 4:
        i.cost += i.days * 6500;
        strcpy(i.hname, "VISTARA");
        break;
    case 5:
        i.cost += i.days * 7000;
        strcpy(i.hname, "GO_AIR");
        break;
    case 6:
        i.cost += i.days * 8000;
        strcpy(i.hname, "AIR_ASIA_INDIA");
        break;

    default:
        printf("\nInvalid choice! Please try again.\n");
        break;
    }


    printf("\n\t ENTER DATE OF CHECK-IN : ");
    scanf("%d",&d);
    printf("\n\t ENTER MONTH OF CHECK-IN : ");
    scanf("%d",&m);
    printf("\n\t ENTER YEAR OF CHECK-IN : ");
    scanf("%d",&y);

    d1=d+i.days;
    m1=m;
    y1=y;
    if(d1>31)
    {
        d1=d1-31;
        m1+=1;
        if(m1>12)
        {
            m1=m1-12;
            y1+=1;
        }
    }
    printf("\n\n\t\t   press enter to continue .....");
    getchar();
    getchar();
}



void flights(int id)
{
    int choice;
    printf("\n\n\t\t FLIGHTS AVAILABLE : ");
    printf("\n\n    1. AIR INDIA:         DEPARTURE : 7.00 AM  PRICE : 50,000 RS");
    printf("\n    2. SPICEJET:          DEPARTURE : 10.00 AM  PRICE : 35,000 RS");
    printf("\n    3. INDIGO AIRLINES:   DEPARTURE : 12.00 PM  PRICE : 30,000 RS");
    printf("\n    4. VISTARA:           DEPARTURE : 3.00 PM   PRICE : 60,000 RS");
    printf("\n    5. GO AIR:            DEPARTURE : 8.00 PM   PRICE : 28,000 RS");
    printf("\n    6. AIR ASIA INDIA:    DEPARTURE : 9.30 PM   PRICE : 45,000 RS");
    printf("\n\n\t ENTER CHOICE :  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        i.cost+=50000;
        i.time=7.00;
        strcpy(i.shift,"AM");
        strcpy(i.fname,"AIR INDIA");
        break;
    case 2:
        i.cost+=35000;
        i.time=10.00;
        strcpy(i.shift,"AM");
        strcpy(i.fname,"SPICEJET");
        break;
    case 3:
        i.cost+=30000;
        i.time=12.00;
        strcpy(i.shift,"PM");
        strcpy(i.fname,"INDIGO AIRLINES");
        break;
    case 4:
        i.cost+=60000;
        i.time=3.00;
        strcpy(i.shift,"PM");
        strcpy(i.fname,"VISTARA");
        break;
    case 5:
        i.cost+=28000;
        i.time=8.00;
        strcpy(i.shift,"PM");
        strcpy(i.fname,"GO AIR");
        break;
    case 6:
        i.cost+=45000;
        i.time=9.30;
        strcpy(i.shift,"PM");
        strcpy(i.fname,"AIR ASIA INDIA");
        break;

    }
    FILE *p;
    p=fopen("checkid.txt","a+");
    fprintf(p,"%d \n",id);
    fclose(p);
    printf("\n\n\t\t   press enter to continue .....");
    getchar();
    getchar();

}


void destination()
{
    system("cls");
    int n;

    printf("\n\t DESTINATION MENU:");
    printf("\n\n\t 1. TAJ MAHAL, AGRA");
    printf("\n\n\t 2. JAIPUR, RAJASTHAN");
    printf("\n\n\t 3. VARANASI, UTTAR PRADESH");
    printf("\n\n\t 4. LEH-LADAKH, JAMMU & KASHMIR");
    printf("\n\n\t 5. GOA");
    printf("\n\n\t 6. KERALA BACKWATERS");
    printf("\n\n\t 7. MYSORE, KARNATAKA");
    printf("\n\n\t 8. RISHIKESH, UTTARAKHAND");
    printf("\n\n\t 9. AMRITSAR, PUNJAB");
    printf("\n\n\t 10. HAMPI, KARNATAKA");
    printf("\n\n\t 11. SHIMLA, HIMACHAL PRADESH");
    printf("\n\n\t 12. MANALI, HIMACHAL PRADESH");
    printf("\n\n\t 13. UDAIPUR, RAJASTHAN");
    printf("\n\n\t 14. DARJEELING, WEST BENGAL");
    printf("\n\n\t 15. ANDAMAN AND NICOBAR ISLANDS");
    printf("\n\n\t 16. RANTHAMBORE NATIONAL PARK, RAJASTHAN");
    printf("\n\n\t 17. KOLKATA, WEST BENGAL");
    printf("\n\n\t 18. JAISALMER, RAJASTHAN");
    printf("\n\n\t 19. KASHMIR VALLEY, JAMMU & KASHMIR");
    printf("\n\n\t 20. KHAJURAHO, MADHYA PRADESH");
    printf("\n\n\t 21. MEGHALAYA (SHILLONG & CHERRAPUNJI)");
    printf("\n\n\t 22. COORG, KARNATAKA");
    printf("\n\n\t 23. AJANTA AND ELLORA CAVES, MAHARASHTRA");
    printf("\n\n\t 24. RAJASTHAN DESERT (JODHPUR)");
    printf("\n\n\t 25. SUNDARBANS, WEST BENGAL");

    printf("\n\n\t Choose a destination to learn more!");



    printf("\n\n\t ENTER CHOICE :  ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        tajMahal();
        break;
    case 2:
        jaipur();
        break;
    case 3:
        varanasi();
        break;
    case 4:
        lehLadakh();
        break;
    case 5:
        goa();
        break;
    case 6:
        kerala();
        break;
    case 7:
        mysore();
        break;
    case 8:
        rishikesh();
        break;
    case 9:
        amritsar();
        break;
    case 10:
        hampi();
        break;
    case 11:
        shimla();
        break;
    case 12:
        manali();
        break;
    case 13:
        udaipur();
        break;
    case 14:
        darjeeling();
        break;
    case 15:
        andamanNicobar();
        break;
    case 16:
        ranthambore();
        break;
    case 17:
        kolkata();
        break;
    case 18:
        jaisalmer();
        break;
    case 19:
        kashmirValley();
        break;
    case 20:
        khajuraho();
        break;
    case 21:
        meghalaya();
        break;
    case 22:
        coorg();
        break;
    case 23:
        ajantaEllora();
        break;
    case 24:
        rajasthanDesert();
        break;
    case 25:
        sundarbans();
        break;
    case 0:
        printf("\nExiting the program. Thank you!\n");

    default:
        printf("\nInvalid choice! Please try again.\n");
    }
}


void tajMahal()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO TAJ MAHAL TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 1);
}

void jaipur()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO JAIPUR TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 2);
}

void varanasi()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO VARANASI TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 3);
}

void lehLadakh()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO LEH-LADAKH TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 4);
}

void goa()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO GOA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 5);
}

void kerala()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO KERALA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 6);
}

void mysore()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO MYSORE TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 7);
}

void rishikesh()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO RISHIKESH TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 8);
}

void amritsar()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO AMRITSAR TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 9);
}

void hampi()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO HAMPI TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 10);
}

void shimla()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO SHIMLA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 11);
}

void manali()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO MANALI TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 12);
}

void udaipur()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO UDAIPUR TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 13);
}

void darjeeling()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO DARJEELING TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 14);
}

void andamanNicobar()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO ANDAMAN & NICOBAR TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 15);
}

void ranthambore()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO RANTHAMBORE TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 16);
}

void kolkata()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO KOLKATA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 17);
}

void jaisalmer()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO JAISALMER TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 18);
}

void kashmirValley()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO KASHMIR VALLEY TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 19);
}

void khajuraho()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO KHAJURAHO TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 20);
}

void meghalaya()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO MEGHALAYA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 21);
}

void coorg()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO COORG TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 22);
}

void ajantaEllora()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO AJANTA & ELLORA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 23);
}

void rajasthanDesert()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO RAJASTHAN DESERT TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 24);
}

void sundarbans()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO SUNDARBANS TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 25);
}


int menu()
{
    int n;
    system("cls");
    printf("\n\tMENU :");
    printf("\n\n\t1. CHOOSE DESTINATION \n\n\t2. GENERATE BILL\n\n\t3. EXIT\n\n\tENTER CHOICE :  ");
    scanf("\n%d", &n);
    switch (n)
    {
    case 1:
        destination();
        break;
    case 2:
        print_details();
        break;
    case 3:
        return 0;
    }
    getch();
    menu();
    return 0;
}

/////////////////////////////////
void int_print_details()
{
    system("cls");
    int id,no,flag=0;
    printf("\n\t TRAVELLERS DETAILS :\n");
    printf(" \nENTER ID OF THE PERSON YOU ARE SEARCHING FOR :  ");
    scanf("%d", &id);
    FILE *f;
    f=fopen("international.txt", "r");
    while (!feof(f))
    {
        fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);

        if(id==no)
        {
            printf("\n\n\tID : %d",no);
            printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
            printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
            printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
            printf("\n\tDESTINATION : %s",i.destination);
            printf("\n\tFLIGHT NAME : %s",i.fname);
            printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
            printf("\nPress enter to continue .....");
            flag=1;
        }
        if(flag==1)
            break;
    }
    fclose(f);
    if(flag==0)
    {
        printf("\nNo bill exists.");
        printf("\nPress enter to continue .....");

    }
}


int int_check(int id)
{
    int fi;
    FILE *f1;

    f1=fopen("intcheckid.txt","w");

    fclose(f1);

    FILE *f;
    f=fopen("intcheckid.txt","r+");
    while(!feof(f))
    {
        fscanf(f,"%d",&fi);
        if(fi==id)
        {
            printf("\n\t ID ALDREADY EXISTS!) !\n\t CHOOSE ANOTHER ID :\n");
            return 1;
        }
    }
    fclose(f);
    return 0;
}
void int_print_ticket(int a[],int cnt)
{
    system("cls");
    int z,no,flag;
    FILE *f;
    printf("\n\n\t YOUR TICKET:");
    for(z=0; z<cnt; ++z)
    {
        flag=0;
        f=fopen("international.txt", "r");
        while (!feof(f))
        {
            fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);
            if(a[z]==no)
            {
                printf("\n\n\tID : %d",no);
                printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
                printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
                printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
                printf("\n\tDESTINATION : %s",i.destination);
                printf("\n\tFLIGHT NAME : %s",i.fname);
                printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
                flag=1;
            }
            if(flag==1)
                break;
        }
        fclose(f);
    }
    printf("\n\n\t\tTOTAL COST : %ld",i.cost);
    printf("\n\n\t\tBOOKING SUCCESSFULL");
    printf("\n\n\t\t   press enter to go to main menu .....");
    getchar();
    menu();
}
void int_input(int cnt, int cno)
{
    int a[cnt];
    int pos = 0, res;

    // Set the international destination based on the choice
    switch(cno)
    {
    case 1:
        strcpy(i.destination, "PARIS");
        break;
    case 2:
        strcpy(i.destination, "NEW_YORK");
        break;
    case 3:
        strcpy(i.destination, "LONDON");
        break;
    case 4:
        strcpy(i.destination, "SYDNEY");
        break;
    case 5:
        strcpy(i.destination, "DUBAI");
        break;
    case 6:
        strcpy(i.destination, "TOKYO");
        break;
    case 7:
        strcpy(i.destination, "BANGKOK");
        break;
    case 8:
        strcpy(i.destination, "SINGAPORE");
        break;
    case 9:
        strcpy(i.destination, "ROME");
        break;
    case 10:
        strcpy(i.destination, "BERLIN");
        break;
    case 11:
        strcpy(i.destination, "LOS_ANGELES");
        break;
    case 12:
        strcpy(i.destination, "AMSTERDAM");
        break;
    case 13:
        strcpy(i.destination, "CAPE_TOWN");
        break;
    case 14:
        strcpy(i.destination, "SEOUL");
        break;
    case 15:
        strcpy(i.destination, "KUALA_LUMPUR");
        break;
    case 16:
        strcpy(i.destination, "ISTANBUL");
        break;
    case 17:
        strcpy(i.destination, "BARCELONA");
        break;
    case 18:
        strcpy(i.destination, "ROME");
        break;
    case 19:
        strcpy(i.destination, "SANTIAGO");
        break;
    case 20:
        strcpy(i.destination, "MEXICO_CITY");
        break;
    default:
        printf("\nInvalid choice! Please try again.\n");
        return;
    }

    int x = 0, id;
    while(x < cnt)
    {
        system("cls");
        printf("\n\t\t ENTER %d PERSON DETAILS\n", x + 1);
a:
        printf("\n\n\t     CHOOSE YOUR TRAVEL ID (1-100): ");
        scanf("%d", &id);

        res = check(id);  // Check if the ID is valid
        if(res == 1)
            goto a;  // If invalid, ask again

        // Input personal details of the traveler
        printf("\n\t    ENTER NAME, AGE, GENDER (M/F):\n\n");
        FILE *f = fopen("international.txt", "a+");
        if(f == NULL)
        {
            printf("Error opening file!\n");
            return;
        }
        printf("\t    Name: ");
        scanf("%s", i.name);
        printf("\t    Age: ");
        scanf("%d", &i.age);
        printf("\t    Gender (M/F): ");
        getchar();  // To consume any extra newline
        i.gender = getchar();

        printf("\n\n\t\t   Press Enter to continue.....");
        getchar();  // To pause before moving on

        flights(id);  // Function to select flight
        hotels();      // Function to select hotel

        // Writing traveler details to the file
        fprintf(f, "%d %s %d %c %d %s %s %f %s ", id, i.name, i.age, i.gender, i.cost, i.destination, i.fname, i.time, i.shift);
        fprintf(f, " %d %d %d %d %d %d %s\n", d, m, y, d1, m1, y1, i.hname);

        fclose(f);

        a[x] = id;  // Store the ID of the traveler
        ++x;  // Move to the next traveler
    }

    int_print_ticket(a, cnt);  // Generate the ticket after all travelers are inputted
}
void int_hotels(int id)
{
    int n, d, m, y, d1, m1, y1;

    system("cls");
    printf("\n\t\t INTERNATIONAL HOTELS :");
    printf("\n\n\t1. THE RITZ-CARLTON, NEW YORK\t PRICE : 500 USD PER DAY");
    printf("\n\n\t2. THE LANGHAM, LONDON\t PRICE : 600 USD PER DAY");
    printf("\n\n\t3. FOUR SEASONS, PARIS\t PRICE : 650 USD PER DAY");
    printf("\n\n\t4. THE DORCHESTER, LONDON\t PRICE : 700 USD PER DAY");
    printf("\n\n\t5. THE ST. REGIS, DUBAI\t PRICE : 550 USD PER DAY");

    printf("\n\n\t6. THE PLAZA, NEW YORK\t PRICE : 750 USD PER DAY");
    printf("\n\n\t7. MANDARIN ORIENTAL, BANGKOK\t PRICE : 400 USD PER DAY");
    printf("\n\n\t8. RITZ PARIS\t PRICE : 800 USD PER DAY");
    printf("\n\n\t9. BANYAN TREE, MALDIVES\t PRICE : 1000 USD PER DAY");
    printf("\n\n\t10. SHANGRI-LA, SINGAPORE\t PRICE : 700 USD PER DAY");

    printf("\n\n\t11. PARK HYATT, TOKYO\t PRICE : 600 USD PER DAY");
    printf("\n\n\t12. MARRIOTT, SAN FRANCISCO\t PRICE : 450 USD PER DAY");
    printf("\n\n\t13. INTERCONTINENTAL, BANGKOK\t PRICE : 500 USD PER DAY");
    printf("\n\n\t14. CONRAD, HONG KONG\t PRICE : 650 USD PER DAY");
    printf("\n\n\t15. THE LEELA PALACE, BANGALORE\t PRICE : 550 USD PER DAY");

    printf("\n\n\t ENTER CHOICE :  ");
    scanf("%d", &n);
    printf("\n\n\t ENTER NO OF DAYS : ");
    scanf("%d",&i.days);

    switch (n)
    {
    case 1:
        i.cost += i.days * 500;  // Price per day in USD
        strcpy(i.hname, "THE RITZ-CARLTON, NEW YORK");
        break;
    case 2:
        i.cost += i.days * 600;
        strcpy(i.hname, "THE LANGHAM, LONDON");
        break;
    case 3:
        i.cost += i.days * 650;
        strcpy(i.hname, "FOUR SEASONS, PARIS");
        break;
    case 4:
        i.cost += i.days * 700;
        strcpy(i.hname, "THE DORCHESTER, LONDON");
        break;
    case 5:
        i.cost += i.days * 550;
        strcpy(i.hname, "THE ST. REGIS, DUBAI");
        break;
    case 6:
        i.cost += i.days * 750;
        strcpy(i.hname, "THE PLAZA, NEW YORK");
        break;
    case 7:
        i.cost += i.days * 400;
        strcpy(i.hname, "MANDARIN ORIENTAL, BANGKOK");
        break;
    case 8:
        i.cost += i.days * 800;
        strcpy(i.hname, "RITZ PARIS");
        break;
    case 9:
        i.cost += i.days * 1000;
        strcpy(i.hname, "BANYAN TREE, MALDIVES");
        break;
    case 10:
        i.cost += i.days * 700;
        strcpy(i.hname, "SHANGRI-LA, SINGAPORE");
        break;
    case 11:
        i.cost += i.days * 600;
        strcpy(i.hname, "PARK HYATT, TOKYO");
        break;
    case 12:
        i.cost += i.days * 450;
        strcpy(i.hname, "MARRIOTT, SAN FRANCISCO");
        break;
    case 13:
        i.cost += i.days * 500;
        strcpy(i.hname, "INTERCONTINENTAL, BANGKOK");
        break;
    case 14:
        i.cost += i.days * 650;
        strcpy(i.hname, "CONRAD, HONG KONG");
        break;
    case 15:
        i.cost += i.days * 550;
        strcpy(i.hname, "THE LEELA PALACE, BANGALORE");
        break;
    default:
        printf("\nInvalid choice! Please try again.\n");
        break;
    }

    // Get check-in date
    printf("\n\t ENTER DATE OF CHECK-IN : ");
    scanf("%d", &d);
    printf("\n\t ENTER MONTH OF CHECK-IN : ");
    scanf("%d", &m);
    printf("\n\t ENTER YEAR OF CHECK-IN : ");
    scanf("%d", &y);

    // Calculate check-out date
    d1 = d + i.days;
    m1 = m;
    y1 = y;

    // Adjust the check-out date
    if (d1 > 31)
    {
        d1 = d1 - 31;
        m1 += 1;
        if (m1 > 12)
        {
            m1 = m1 - 12;
            y1 += 1;
        }
    }

    printf("\n\n\t\t   press enter to continue .....");
    getchar();
    getchar();
}
void int_flights(int id)
{
    int choice;

    // Display instructions and international flight options
    printf("\n\n\t\t INTERNATIONAL FLIGHTS AVAILABLE: \n");
    printf("\n\tPlease choose an international flight from the list below by entering the corresponding number.\n\n");

    printf("    7. LUFTHANSA:         DEPARTURE: 6.00 AM  PRICE: 150,000 RS\n");
    printf("    8. EMIRATES:          DEPARTURE: 9.00 AM  PRICE: 200,000 RS\n");
    printf("    9. QATAR AIRWAYS:     DEPARTURE: 10.30 AM  PRICE: 180,000 RS\n");
    printf("    10. AIR FRANCE:       DEPARTURE: 1.00 PM   PRICE: 190,000 RS\n");
    printf("    11. KLM:              DEPARTURE: 4.00 PM   PRICE: 170,000 RS\n");
    printf("    12. TURKISH AIRLINES: DEPARTURE: 7.00 PM   PRICE: 160,000 RS\n");

    printf("\n\tENTER CHOICE: ");
    scanf("%d", &choice);

    // Update flight details based on the user's choice
    switch(choice)
    {
    case 7:
        i.cost += 150000;
        i.time = 6.00;
        strcpy(i.shift, "AM");
        strcpy(i.fname, "LUFTHANSA");
        break;
    case 8:
        i.cost += 200000;
        i.time = 9.00;
        strcpy(i.shift, "AM");
        strcpy(i.fname, "EMIRATES");
        break;
    case 9:
        i.cost += 180000;
        i.time = 10.30;
        strcpy(i.shift, "AM");
        strcpy(i.fname, "QATAR AIRWAYS");
        break;
    case 10:
        i.cost += 190000;
        i.time = 1.00;
        strcpy(i.shift, "PM");
        strcpy(i.fname, "AIR FRANCE");
        break;
    case 11:
        i.cost += 170000;
        i.time = 4.00;
        strcpy(i.shift, "PM");
        strcpy(i.fname, "KLM");
        break;
    case 12:
        i.cost += 160000;
        i.time = 7.00;
        strcpy(i.shift, "PM");
        strcpy(i.fname, "TURKISH AIRLINES");
        break;
    default:
        printf("\nInvalid choice! Please select a valid flight number.\n");
        return; // Exit the function early if an invalid choice is made
    }

    // Save the selected flight information to a file
    FILE *p;
    p = fopen("intcheckid.txt", "a+");
    if (p == NULL)
    {
        printf("Error opening file to save flight information.\n");
        return;
    }
    fprintf(p,"%d \n",id);
    fclose(p);

    // Inform the user that the information has been saved
    printf("\nFlight selected successfully! Your details have been saved.\n");
    printf("\n\tPress Enter to continue ...");
    getchar();  // To capture the extra newline character
    getchar();  // Wait for user to press Enter
}
// Function to handle destination selection
void int_destination()
{
    int choice;

    // Display the list of 20 international destinations
    printf("\n\t DESTINATION MENU:\n");
    printf("\n\t 1. PARIS");
    printf("\n\t 2. NEW YORK");
    printf("\n\t 3. LONDON");
    printf("\n\t 4. SYDNEY");
    printf("\n\t 5. DUBAI");
    printf("\n\t 6. TOKYO");
    printf("\n\t 7. BANGKOK");
    printf("\n\t 8. SINGAPORE");
    printf("\n\t 9. ROME");
    printf("\n\t 10. BERLIN");
    printf("\n\t 11. LOS ANGELES");
    printf("\n\t 12. AMSTERDAM");
    printf("\n\t 13. CAPE TOWN");
    printf("\n\t 14. SEOUL");
    printf("\n\t 15. KUALA LUMPUR");
    printf("\n\t 16. ISTANBUL");
    printf("\n\t 17. BARCELONA");
    printf("\n\t 18. ROME");
    printf("\n\t 19. SANTIAGO");
    printf("\n\t 20. MEXICO CITY");

    // Ask the user for their choice
    printf("\n\n\tEnter the number of the destination you want to learn more about: ");
    scanf("%d", &choice);

    // Store the destination in the 'i.destination' based on user's choice
switch (choice)
{
    case 1:
        paris();
        break;
    case 2:
        newYork();
        break;
    case 3:
        london();
        break;
    case 4:
        sydney();
        break;
    case 5:
        dubai();
        break;
    case 6:
        tokyo();
        break;
    case 7:
        bangkok();
        break;
    case 8:
        singapore();
        break;
    case 9:
        rome();
        break;
    case 10:
        berlin();
        break;
    case 11:
        losAngeles();
        break;
    case 12:
        amsterdam();
        break;
    case 13:
        capeTown();
        break;
    case 14:
        seoul();
        break;
    case 15:
        kualaLumpur();
        break;
    case 16:
        istanbul();
        break;
    case 17:
        barcelona();
        break;
    case 18:
        santiago();
        break;
    case 19:
        mexicoCity();
        break;
    default:
        printf("\nInvalid choice! Please select a valid destination.\n");
        break;
}


}

// Function for Paris tourism
void paris()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO PARIS TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 1);  // 1 indicates Paris
}

// Function for New York tourism
void newYork()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO NEW YORK TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 2);  // 2 indicates New York
}

// Function for London tourism
void london()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO LONDON TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 3);  // 3 indicates London
}

// Function for Sydney tourism
void sydney()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO SYDNEY TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 4);  // 4 indicates Sydney
}

// Function for Dubai tourism
void dubai()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO DUBAI TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 5);  // 5 indicates Dubai
}

// Function for Tokyo tourism
void tokyo()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO TOKYO TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 6);  // 6 indicates Tokyo
}

// Function for Bangkok tourism
void bangkok()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO BANGKOK TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 7);  // 7 indicates Bangkok
}

// Function for Singapore tourism
void singapore()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO SINGAPORE TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 8);  // 8 indicates Singapore
}

// Function for Rome tourism
void rome()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO ROME TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 9);  // 9 indicates Rome
}

// Function for Berlin tourism
void berlin()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO BERLIN TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 10);  // 10 indicates Berlin
}

// Function for Los Angeles tourism
void losAngeles()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO LOS ANGELES TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 11);  // 11 indicates Los Angeles
}

// Function for Amsterdam tourism
void amsterdam()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO AMSTERDAM TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 12);  // 12 indicates Amsterdam
}

// Function for Cape Town tourism
void capeTown()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO CAPE TOWN TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 13);  // 13 indicates Cape Town
}

// Function for Seoul tourism
void seoul()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO SEOUL TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 14);  // 14 indicates Seoul
}

// Function for Kuala Lumpur tourism
void kualaLumpur()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO KUALA LUMPUR TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 15);  // 15 indicates Kuala Lumpur
}

// Function for Istanbul tourism
void istanbul()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO ISTANBUL TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 16);  // 16 indicates Istanbul
}

// Function for Barcelona tourism
void barcelona()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO BARCELONA TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 17);  // 17 indicates Barcelona
}

// Function for Santiago tourism
void santiago()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO SANTIAGO TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 19);  // 19 indicates Santiago
}

// Function for Mexico City tourism
void mexicoCity()
{
    int cnt;
    system("cls");
    printf("\n\t\tWELCOME TO MEXICO CITY TOURISM  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE: ");
    scanf("%d", &cnt);
    input(cnt, 20);  // 20 indicates Mexico City
}

int int_menu()
{
    int n;
    system("cls");
    printf("\n\tMENU :");
    printf("\n\n\t1. CHOOSE DESTINATION \n\n\t2. GENERATE BILL\n\n\t3. EXIT\n\n\tENTER CHOICE :  ");
    scanf("\n%d", &n);
    switch (n)
    {
    case 1:
        int_destination();
        break;
    case 2:
        int_print_details();
        break;
    case 3:
        return 0;
    }
    getch();
    int_menu();
    return 0;
}
int main1()
{
    system("cls");  // Clear the screen

    // Welcome message
    cout << "\n\n\n\n\n\n\t\t\t   WELCOME \n\n\t\t      TRAVEL AGENCY";
    cout << "\n\n\t\t   Press enter to continue .....";

    // Wait for user input to continue
    getchar();

    int choice;

    // Display the choices
    cout << "\n\n\tEnter 1 for National Destinations or 2 for International Destinations: ";
    cin >> choice;

    // Handle user input
    switch (choice)
    {
    case 1:
        cout << "You selected National Destinations." << endl;
        menu();  // Call function to display national destinations
        break;
    case 2:
        cout << "You selected International Destinations." << endl;
        int_menu();  // Call function to display international destinations
        break;
    default:
        cout << "Invalid choice! Please enter 1 or 2." << endl;
        break;
    }

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <regex>

using namespace std;

// Forward declarations
void mainMenu();
void flightReservation();
void trainReservation();
void busReservation();
void travelAgency();
void adminPanel();

// Constants
const int MAX_SEATS_FLIGHT = 180;
const int MAX_SEATS_TRAIN = 72;
const int MAX_SEATS_BUS = 40;
const double GST_RATE = 0.18;
const int PASSWORD_LENGTH = 6;

// Global Variables
vector<string> cities = {
    "Mumbai", "Delhi", "Bangalore", "Chennai", "Kolkata",
    "Hyderabad", "Pune", "Ahmedabad", "Jaipur", "Lucknow"
};

// Validation Class
class Validator {
public:
    static bool isValidEmail(const string& email) {
        const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
        return regex_match(email, pattern);
    }

    static bool isValidPhone(const string& phone) {
        if(phone.length() != 10) return false;
        return all_of(phone.begin(), phone.end(), ::isdigit);
    }

    static bool isValidDate(const string& date) {
        if(date.length() != 10) return false;
        if(date[2] != '/' || date[5] != '/') return false;

        int dd = stoi(date.substr(0,2));
        int mm = stoi(date.substr(3,2));
        int yy = stoi(date.substr(6,4));

        if(mm < 1 || mm > 12) return false;
        if(dd < 1 || dd > 31) return false;
        if(yy < 2024 || yy > 2025) return false;

        return true;
    }

    static bool isValidName(const string& name) {
        return all_of(name.begin(), name.end(), [](char c) {
            return isalpha(c) || isspace(c);
        });
    }

    static bool isValidCity(const string& city) {
        return find(cities.begin(), cities.end(), city) != cities.end();
    }
};

// Logger Class
class Logger {
private:
    static ofstream logFile;

public:
    static void init() {
        logFile.open("system_log.txt", ios::app);
    }

    static void log(const string& message) {
        time_t now = time(0);
        string timestamp = ctime(&now);
        timestamp = timestamp.substr(0, timestamp.length()-1);
        logFile << "[" << timestamp << "] " << message << endl;
    }

    static void close() {
        logFile.close();
    }
};
ofstream Logger::logFile;

// Database Handler Class
class DatabaseHandler {
protected:
    string filename;

public:
    DatabaseHandler(const string& fname) : filename(fname) {}

    virtual void saveRecord(const string& record) {
        ofstream file(filename, ios::app);
        file << record << endl;
        file.close();
    }

    virtual vector<string> getAllRecords() {
        vector<string> records;
        string line;
        ifstream file(filename);
        while(getline(file, line)) {
            records.push_back(line);
        }
        file.close();
        return records;
    }

    virtual bool deleteRecord(const string& id) {
        vector<string> records = getAllRecords();
        ofstream file(filename);
        bool found = false;

        for(const string& record : records) {
            if(record.find(id) == string::npos) {
                file << record << endl;
            } else {
                found = true;
            }
        }
        file.close();
        return found;
    }
};

// Payment System Class
class PaymentSystem {
private:
    string transactionId;
    double amount;
    string paymentMethod;

public:
    enum PaymentMethod {
        CREDIT_CARD,
        DEBIT_CARD,
        NET_BANKING,
        UPI
    };

    bool processPayment(double amount, PaymentMethod method) {
        this->amount = amount;
        transactionId = generateTransactionId();

        // Simulate payment processing
        cout << "\nProcessing payment of Rs. " << amount;
        for(int i = 0; i < 3; i++) {
            Sleep(1000);
            cout << ".";
        }
        cout << "\nPayment successful!";
        cout << "\nTransaction ID: " << transactionId;

        saveTransaction();
        return true;
    }

private:
    string generateTransactionId() {
        time_t now = time(0);
        return "TXN" + to_string(now);
    }

    void saveTransaction() {
        ofstream file("transactions.txt", ios::app);
        file << transactionId << "," << amount << "," << paymentMethod << endl;
        file.close();
    }
};

// Seat Management Class
class SeatManager {
private:
    set<int> occupiedSeats;
    int maxSeats;

public:
    SeatManager(int max) : maxSeats(max) {}

    int allocateSeat() {
        for(int i = 1; i <= maxSeats; i++) {
            if(occupiedSeats.find(i) == occupiedSeats.end()) {
                occupiedSeats.insert(i);
                return i;
            }
        }
        return -1; // No seats available
    }

    bool isSeatAvailable(int seatNo) {
        return occupiedSeats.find(seatNo) == occupiedSeats.end();
    }

    void freeSeat(int seatNo) {
        occupiedSeats.erase(seatNo);
    }

    int getAvailableSeats() {
        return maxSeats - occupiedSeats.size();
    }
};

// Base Booking Class with enhanced functionality
class Booking {
protected:
    string customerName;
    string phone;
    string email;
    string date;
    int seatNumber;
    double fare;
    string bookingId;
    PaymentSystem paymentSystem;
    DatabaseHandler* db;

    virtual void calculateFare() = 0;

    string generateBookingId(const string& prefix) {
        static int counter = 1000;
        return prefix + to_string(++counter);
    }

    bool validateInputs() {
        if(!Validator::isValidName(customerName)) {
            cout << "\nInvalid name format!";
            return false;
        }
        if(!Validator::isValidPhone(phone)) {
            cout << "\nInvalid phone number!";
            return false;
        }
        if(!Validator::isValidEmail(email)) {
            cout << "\nInvalid email format!";
            return false;
        }
        if(!Validator::isValidDate(date)) {
            cout << "\nInvalid date format!";
            return false;
        }
        return true;
    }

public:
    Booking() {
        seatNumber = -1;
        fare = 0.0;
    }

    virtual void book() = 0;
    virtual void cancel() = 0;
    virtual void display() = 0;

    virtual ~Booking() {}
};

// Flight Booking Class with enhanced features
class FlightBooking : public Booking {
private:
    string flightNumber;
    string source;
    string destination;
    string classType;
    string meal;
    bool insurance;
    SeatManager* seatManager;

    void calculateFare() override {
        double baseFare = (classType == "Business") ? 15000 : 5000;
        double distance = getDistance(source, destination);
        fare = baseFare + (distance * 10);

        if(meal == "Yes") fare += 500;
        if(insurance) fare += 1000;

        // Add GST
        fare += fare * GST_RATE;
    }

    double getDistance(const string& src, const string& dest) {
        // Simplified distance calculation
        map<pair<string,string>, double> distances = {
            {{"Mumbai", "Delhi"}, 1200},
            {{"Mumbai", "Bangalore"}, 1000},
            {{"Delhi", "Bangalore"}, 2000},
            {{"Mumbai", "Chennai"}, 1500},
            {{"Delhi", "Chennai"}, 2200},
            {{"Bangalore", "Chennai"}, 500},
            {{"Mumbai", "Kolkata"}, 2000},
            {{"Delhi", "Kolkata"}, 1500},
            {{"Chennai", "Kolkata"}, 1800},
            {{"Hyderabad", "Mumbai"}, 800},
            {{"Hyderabad", "Delhi"}, 1600},
            {{"Hyderabad", "Bangalore"}, 600}
        };

        auto route = make_pair(src, dest);
        if(distances.find(route) != distances.end()) {
            return distances[route];
        }

        // Try reverse route
        route = make_pair(dest, src);
        if(distances.find(route) != distances.end()) {
            return distances[route];
        }

        // Default distance if route not found
        return 1000;
    }

public:
    FlightBooking() {
        db = new DatabaseHandler("flight_bookings.txt");
        seatManager = new SeatManager(MAX_SEATS_FLIGHT);
    }

    void book() override {
        cout << "\n=== Flight Booking ===\n";

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Phone: ";
        cin >> phone;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;

        cout << "\nAvailable Cities:\n";
        for(const string& city : cities) {
            cout << city << endl;
        }

        cout << "Enter Source: ";
        cin >> source;

        if(!Validator::isValidCity(source)) {
            cout << "\nInvalid source city!";
            return;
        }

        cout << "Enter Destination: ";
        cin >> destination;

        if(!Validator::isValidCity(destination)) {
            cout << "\nInvalid destination city!";
            return;
        }

        if(source == destination) {
            cout << "\nSource and destination cannot be same!";
            return;
        }

        cout << "Class (Economy/Business): ";
        cin >> classType;

        if(classType != "Economy" && classType != "Business") {
            cout << "\nInvalid class type!";
            return;
        }

        cout << "Meal required? (Yes/No): ";
        cin >> meal;

        if(meal != "Yes" && meal != "No") {
            cout << "\nInvalid meal choice!";
            return;
        }

        cout << "Insurance required? (1/0): ";
        cin >> insurance;

        if(!validateInputs()) {
            return;
        }

        seatNumber = seatManager->allocateSeat();
        if(seatNumber == -1) {
            cout << "\nSorry, no seats available!";
            return;
        }

        calculateFare();

        // Show booking details before payment
        cout << "\n=== Booking Details ===\n";
        cout << "Passenger: " << customerName << endl;
        cout << "Route: " << source << " -> " << destination << endl;
        cout << "Class: " << classType << endl;
        cout << "Meal: " << meal << endl;
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Total Fare: Rs. " << fixed << setprecision(2) << fare << endl;

        cout << "\nProceed with payment? (1/0): ";
        bool proceed;
        cin >> proceed;

        if(!proceed) {
            seatManager->freeSeat(seatNumber);
            cout << "\nBooking cancelled!";
            return;
        }

        // Process payment
        if(!paymentSystem.processPayment(fare, PaymentSystem::CREDIT_CARD)) {
            seatManager->freeSeat(seatNumber);
            return;
        }

        // Generate booking ID and flight number
        bookingId = generateBookingId("FL");
        flightNumber = "AI" + to_string(rand() % 1000);

        // Save booking
        stringstream ss;
        ss << bookingId << "," << flightNumber << "," << customerName << ","
           << phone << "," << email << "," << source << "," << destination << ","
           << date << "," << seatNumber << "," << classType << ","
           << meal << "," << insurance << "," << fare;

        db->saveRecord(ss.str());

        Logger::log("New flight booking: " + bookingId);

        display();
    }

    void cancel() override {
        string id;
        cout << "\nEnter Booking ID: ";
        cin >> id;

        if(db->deleteRecord(id)) {
            cout << "\nBooking cancelled successfully!";
            Logger::log("Flight booking cancelled: " + id);
        } else {
            cout << "\nBooking not found!";
        }
    }

    void display() override {
        cout << "\n=== Flight Ticket ===\n";
        cout << "Booking ID: " << bookingId << endl;
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Passenger: " << customerName << endl;
        cout << "Contact: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Date: " << date << endl;
        cout << "Seat: " << seatNumber << endl;
        cout << "Class: " << classType << endl;
        cout << "Meal: " << meal << endl;
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Fare: Rs. " << fixed << setprecision(2) << fare << endl;
    }

    ~FlightBooking() {
        delete seatManager;
    }
};

// Train Booking Class with enhanced features
class TrainBooking : public Booking {
private:
    string trainNumber;
    string source;
    string destination;
    string classType;
    string berth;
    bool insurance;
    SeatManager* seatManager;

    void calculateFare() override {
        double baseFare = (classType == "AC") ? 2000 : 500;
        double distance = getDistance(source, destination);
        fare = baseFare + (distance * 2);

        if(insurance) fare += 200;

        // Add GST
        fare += fare * GST_RATE;
    }

    double getDistance(const string& src, const string& dest) {
        // Simplified distance calculation
        map<pair<string,string>, double> distances = {
            {{"Mumbai", "Delhi"}, 1400},
            {{"Mumbai", "Bangalore"}, 1200},
            {{"Delhi", "Bangalore"}, 2200},
            {{"Mumbai", "Chennai"}, 1600},
            {{"Delhi", "Chennai"}, 2400},
            {{"Bangalore", "Chennai"}, 600},
            {{"Mumbai", "Kolkata"}, 2200},
            {{"Delhi", "Kolkata"}, 1600},
            {{"Chennai", "Kolkata"}, 2000},
            {{"Hyderabad", "Mumbai"}, 900},
            {{"Hyderabad", "Delhi"}, 1800},
            {{"Hyderabad", "Bangalore"}, 700}
        };

        auto route = make_pair(src, dest);
        if(distances.find(route) != distances.end()) {
            return distances[route];
        }

        // Try reverse route
        route = make_pair(dest, src);
        if(distances.find(route) != distances.end()) {
            return distances[route];
        }

        // Default distance if route not found
        return 1000;
    }

public:
    TrainBooking() {
        db = new DatabaseHandler("train_bookings.txt");
        seatManager = new SeatManager(MAX_SEATS_TRAIN);
    }

    void book() override {
        cout << "\n=== Train Booking ===\n";

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Phone: ";
        cin >> phone;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;

        cout << "\nAvailable Cities:\n";
        for(const string& city : cities) {
            cout << city << endl;
        }

        cout << "Enter Source: ";
        cin >> source;

        if(!Validator::isValidCity(source)) {
            cout << "\nInvalid source city!";
            return;
        }

        cout << "Enter Destination: ";
        cin >> destination;

        if(!Validator::isValidCity(destination)) {
            cout << "\nInvalid destination city!";
            return;
        }

        if(source == destination) {
            cout << "\nSource and destination cannot be same!";
            return;
        }

        cout << "Class (AC/Sleeper): ";
        cin >> classType;

        if(classType != "AC" && classType != "Sleeper") {
            cout << "\nInvalid class type!";
            return;
        }

        cout << "Berth Preference (Upper/Lower/Middle/Side): ";
        cin >> berth;

        if(berth != "Upper" && berth != "Lower" && berth != "Middle" && berth != "Side") {
            cout << "\nInvalid berth preference!";
            return;
        }

        cout << "Insurance required? (1/0): ";
        cin >> insurance;

        if(!validateInputs()) {
            return;
        }

        seatNumber = seatManager->allocateSeat();
        if(seatNumber == -1) {
            cout << "\nSorry, no seats available!";
            return;
        }

        calculateFare();

        // Show booking details before payment
        cout << "\n=== Booking Details ===\n";
        cout << "Passenger: " << customerName << endl;
        cout << "Route: " << source << " -> " << destination << endl;
        cout << "Class: " << classType << endl;
        cout << "Berth: " << berth << endl;
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Total Fare: Rs. " << fixed << setprecision(2) << fare << endl;

        cout << "\nProceed with payment? (1/0): ";
        bool proceed;
        cin >> proceed;

        if(!proceed) {
            seatManager->freeSeat(seatNumber);
            cout << "\nBooking cancelled!";
            return;
        }

        // Process payment
        if(!paymentSystem.processPayment(fare, PaymentSystem::CREDIT_CARD)) {
            seatManager->freeSeat(seatNumber);
            return;
        }

        // Generate booking ID and train number
        bookingId = generateBookingId("TR");
        trainNumber = "IR" + to_string(rand() % 1000);

        // Save booking
        stringstream ss;
        ss << bookingId << "," << trainNumber << "," << customerName << ","
           << phone << "," << email << "," << source << "," << destination << ","
           << date << "," << seatNumber << "," << classType << ","
           << berth << "," << insurance << "," << fare;

        db->saveRecord(ss.str());

        Logger::log("New train booking: " + bookingId);

        display();
    }

    void cancel() override {
        string id;
        cout << "\nEnter Booking ID: ";
        cin >> id;

        if(db->deleteRecord(id)) {
            cout << "\nBooking cancelled successfully!";
            Logger::log("Train booking cancelled: " + id);
        } else {
            cout << "\nBooking not found!";
        }
    }

    void display() override {
        cout << "\n=== Train Ticket ===\n";
        cout << "Booking ID: " << bookingId << endl;
        cout << "Train Number: " << trainNumber << endl;
        cout << "Passenger: " << customerName << endl;
        cout << "Contact: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Date: " << date << endl;
        cout << "Seat: " << seatNumber << endl;
        cout << "Class: " << classType << endl;
        cout << "Berth: " << berth << endl;
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Fare: Rs. " << fixed << setprecision(2) << fare << endl;
    }

    ~TrainBooking() {
        delete seatManager;
    }
};

// Bus Booking Class with enhanced features
class BusBooking : public Booking {
private:
    string busNumber;
    string source;
    string destination;
    string busType;
    bool insurance;
    SeatManager* seatManager;

    void calculateFare() override {
        double baseFare = (busType == "AC") ? 1000 : 300;
        double distance = getDistance(source, destination);
        fare = baseFare + (distance * 1.5);

        if(insurance) fare += 100;

        // Add GST
        fare += fare * GST_RATE;
    }

    double getDistance(const string& src, const string& dest) {
        // Simplified distance calculation
        map<pair<string,string>, double> distances = {
            {{"Mumbai", "Delhi"}, 1400},
            {{"Mumbai", "Bangalore"}, 1200},
            {{"Delhi", "Bangalore"}, 2200},
            {{"Mumbai", "Chennai"}, 1600},
            {{"Delhi", "Chennai"}, 2400},
            {{"Bangalore", "Chennai"}, 600},
            {{"Mumbai", "Kolkata"}, 2200},
            {{"Delhi", "Kolkata"}, 1600},
            {{"Chennai", "Kolkata"}, 2000},
            {{"Hyderabad", "Mumbai"}, 900},
            {{"Hyderabad", "Delhi"}, 1800},
            {{"Hyderabad", "Bangalore"}, 700}
        };

        auto route = make_pair(src, dest);
        if(distances.find(route) != distances.end()) {
            return distances[route];
        }

        // Try reverse route
        route = make_pair(dest, src);
        if(distances.find(route) != distances.end()) {
            return distances[route];
        }

        // Default distance if route not found
        return 1000;
    }

public:
    BusBooking() {
        db = new DatabaseHandler("bus_bookings.txt");
        seatManager = new SeatManager(MAX_SEATS_BUS);
    }

    void book() override {
        cout << "\n=== Bus Booking ===\n";

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Phone: ";
        cin >> phone;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;

        cout << "\nAvailable Cities:\n";
        for(const string& city : cities) {
            cout << city << endl;
        }

        cout << "Enter Source: ";
        cin >> source;

        if(!Validator::isValidCity(source)) {
            cout << "\nInvalid source city!";
            return;
        }

        cout << "Enter Destination: ";
        cin >> destination;

        if(!Validator::isValidCity(destination)) {
            cout << "\nInvalid destination city!";
            return;
        }

        if(source == destination) {
            cout << "\nSource and destination cannot be same!";
            return;
        }

        cout << "Bus Type (AC/NonAC): ";
        cin >> busType;

        if(busType != "AC" && busType != "NonAC") {
            cout << "\nInvalid bus type!";
            return;
        }

        cout << "Insurance required? (1/0): ";
        cin >> insurance;

        if(!validateInputs()) {
            return;
        }

        seatNumber = seatManager->allocateSeat();
        if(seatNumber == -1) {
            cout << "\nSorry, no seats available!";
            return;
        }

        calculateFare();

        // Show booking details before payment
        cout << "\n=== Booking Details ===\n";
        cout << "Passenger: " << customerName << endl;
        cout << "Route: " << source << " -> " << destination << endl;
        cout << "Bus Type: " << busType << endl;
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Total Fare: Rs. " << fixed << setprecision(2) << fare << endl;

        cout << "\nProceed with payment? (1/0): ";
        bool proceed;
        cin >> proceed;

        if(!proceed) {
            seatManager->freeSeat(seatNumber);
            cout << "\nBooking cancelled!";
            return;
        }

        // Process payment
        if(!paymentSystem.processPayment(fare, PaymentSystem::CREDIT_CARD)) {
            seatManager->freeSeat(seatNumber);
            return;
        }

        // Generate booking ID and bus number
        bookingId = generateBookingId("BS");
        busNumber = "BT" + to_string(rand() % 1000);

        // Save booking
        stringstream ss;
        ss << bookingId << "," << busNumber << "," << customerName << ","
           << phone << "," << email << "," << source << "," << destination << ","
           << date << "," << seatNumber << "," << busType << ","
           << insurance << "," << fare;

        db->saveRecord(ss.str());

        Logger::log("New bus booking: " + bookingId);

        display();
    }

    void cancel() override {
        string id;
        cout << "\nEnter Booking ID: ";
        cin >> id;

        if(db->deleteRecord(id)) {
            cout << "\nBooking cancelled successfully!";
            Logger::log("Bus booking cancelled: " + id);
        } else {
            cout << "\nBooking not found!";
        }
    }

    void display() override {
        cout << "\n=== Bus Ticket ===\n";
        cout << "Booking ID: " << bookingId << endl;
        cout << "Bus Number: " << busNumber << endl;
        cout << "Passenger: " << customerName << endl;
        cout << "Contact: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Date: " << date << endl;
        cout << "Seat: " << seatNumber << endl;
        cout << "Bus Type: " << busType << endl;
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Fare: Rs. " << fixed << setprecision(2) << fare << endl;
    }

    ~BusBooking() {
        delete seatManager;
    }
};

// Travel Package Class with enhanced features
class TravelPackage : public Booking {
private:
    string packageId;
    string destination;
    int duration;
    string packageType;
    bool insurance;
    vector<string> inclusions;

    void calculateFare() override {
        double baseFare = 0;
        if(packageType == "Premium") {
            baseFare = 50000;
        } else if(packageType == "Deluxe") {
            baseFare = 30000;
        } else {
            baseFare = 15000;
        }

        fare = baseFare * duration;

        if(insurance) fare += 2000;

        // Add GST
        fare += fare * GST_RATE;
    }

    void setInclusions() {
        inclusions.clear();
        if(packageType == "Premium") {
            inclusions = {
                "5-Star Hotel Accommodation",
                "All Meals Included",
                "Luxury Car Transportation",
                "Premium Tourist Spots Entry",
                "Professional Guide",
                "Adventure Activities",
                "Evening Entertainment",
                "Airport Transfers",
                "Welcome Drink",
                "Complimentary Spa"
            };
        } else if(packageType == "Deluxe") {
            inclusions = {
                "4-Star Hotel Accommodation",
                "Breakfast and Dinner",
                "AC Car Transportation",
                "Tourist Spots Entry",
                "Local Guide",
                "Basic Activities",
                "Airport Transfers",
                "Welcome Drink"
            };
        } else {
            inclusions = {
                "3-Star Hotel Accommodation",
                "Breakfast Only",
                "AC Bus Transportation",
                "Tourist Spots Entry",
                "Local Guide",
                "Airport Transfers"
            };
        }
    }

public:
    TravelPackage() {
        db = new DatabaseHandler("package_bookings.txt");
    }

    void book() override {
        cout << "\n=== Travel Package Booking ===\n";

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Phone: ";
        cin >> phone;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;

        cout << "\nAvailable Cities:\n";
        for(const string& city : cities) {
            cout << city << endl;
        }

        cout << "Enter Destination: ";
        cin >> destination;

        if(!Validator::isValidCity(destination)) {
            cout << "\nInvalid destination city!";
            return;
        }

        cout << "Enter Duration (days): ";
        cin >> duration;

        if(duration < 1 || duration > 30) {
            cout << "\nInvalid duration! Package duration should be between 1 and 30 days.";
            return;
        }

        cout << "Package Type (Basic/Deluxe/Premium): ";
        cin >> packageType;

        if(packageType != "Basic" && packageType != "Deluxe" && packageType != "Premium") {
            cout << "\nInvalid package type!";
            return;
        }

        cout << "Insurance required? (1/0): ";
        cin >> insurance;

        if(!validateInputs()) {
            return;
        }

        setInclusions();
        calculateFare();

        // Show package details before payment
        cout << "\n=== Package Details ===\n";
        cout << "Passenger: " << customerName << endl;
        cout << "Destination: " << destination << endl;
        cout << "Duration: " << duration << " days" << endl;
        cout << "Package Type: " << packageType << endl;
        cout << "\nInclusions:\n";
        for(const string& inclusion : inclusions) {
            cout << "- " << inclusion << endl;
        }
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Total Package Cost: Rs. " << fixed << setprecision(2) << fare << endl;

        cout << "\nProceed with payment? (1/0): ";
        bool proceed;
        cin >> proceed;

        if(!proceed) {
            cout << "\nBooking cancelled!";
            return;
        }

        // Process payment
        if(!paymentSystem.processPayment(fare, PaymentSystem::CREDIT_CARD)) {
            return;
        }

        // Generate booking ID and package ID
        bookingId = generateBookingId("PK");
        packageId = "PKG" + to_string(rand() % 1000);

        // Save booking
        stringstream ss;
        ss << bookingId << "," << packageId << "," << customerName << ","
           << phone << "," << email << "," << destination << ","
           << date << "," << duration << "," << packageType << ","
           << insurance << "," << fare;

        db->saveRecord(ss.str());

        Logger::log("New package booking: " + bookingId);

        display();
    }

    void cancel() override {
        string id;
        cout << "\nEnter Booking ID: ";
        cin >> id;

        if(db->deleteRecord(id)) {
            cout << "\nBooking cancelled successfully!";
            Logger::log("Package booking cancelled: " + id);
        } else {
            cout << "\nBooking not found!";
        }
    }

    void display() override {
        cout << "\n=== Travel Package Details ===\n";
        cout << "Booking ID: " << bookingId << endl;
        cout << "Package ID: " << packageId << endl;
        cout << "Passenger: " << customerName << endl;
        cout << "Contact: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Destination: " << destination << endl;
        cout << "Start Date: " << date << endl;
        cout << "Duration: " << duration << " days" << endl;
        cout << "Package Type: " << packageType << endl;
        cout << "\nInclusions:\n";
        for(const string& inclusion : inclusions) {
            cout << "- " << inclusion << endl;
        }
        cout << "Insurance: " << (insurance ? "Yes" : "No") << endl;
        cout << "Total Package Cost: Rs. " << fixed << setprecision(2) << fare << endl;
    }

    ~TravelPackage() {}
};

// Admin Panel Class
class AdminPanel {
private:
    string username;
    string password;
    DatabaseHandler* flightDb;
    DatabaseHandler* trainDb;
    DatabaseHandler* busDb;
    DatabaseHandler* packageDb;

public:
    AdminPanel() {
        flightDb = new DatabaseHandler("flight_bookings.txt");
        trainDb = new DatabaseHandler("train_bookings.txt");
        busDb = new DatabaseHandler("bus_bookings.txt");
        packageDb = new DatabaseHandler("package_bookings.txt");
    }

    bool login() {
        cout << "\nAdmin Login\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        char ch;
        password = "";
        while((ch = _getch()) != 13) {
            if(ch == 8) {
                if(password.length() > 0) {
                    cout << "\b \b";
                    password.pop_back();
                }
            } else {
                password.push_back(ch);
                cout << "*";
            }
        }
        return (username == "admin" && password == "admin123");
    }

    void showMenu() {
        int choice;
        do {
            cout << "\n=== Admin Panel ===\n";
            cout << "1. View All Bookings\n";
            cout << "2. View System Logs\n";
            cout << "3. Manage Cities\n";
            cout << "4. View Revenue Reports\n";
            cout << "5. Back to Main Menu\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {
                case 1: viewAllBookings(); break;
                case 2: viewSystemLogs(); break;
                case 3: manageCities(); break;
                case 4: viewRevenueReports(); break;
                case 5: return;
                default: cout << "\nInvalid choice!";
            }
        } while(choice != 5);
    }

    ~AdminPanel() {
        delete flightDb;
        delete trainDb;
        delete busDb;
        delete packageDb;
    }

private:
    void viewAllBookings() {
        cout << "\n=== Flight Bookings ===\n";
        for(const string& record : flightDb->getAllRecords()) {
            cout << record << endl;
        }

        cout << "\n=== Train Bookings ===\n";
        for(const string& record : trainDb->getAllRecords()) {
            cout << record << endl;
        }

        cout << "\n=== Bus Bookings ===\n";
        for(const string& record : busDb->getAllRecords()) {
            cout << record << endl;
        }

        cout << "\n=== Package Bookings ===\n";
        for(const string& record : packageDb->getAllRecords()) {
            cout << record << endl;
        }
    }

    void viewSystemLogs() {
        ifstream logFile("system_log.txt");
        string line;
        while(getline(logFile, line)) {
            cout << line << endl;
        }
        logFile.close();
    }

    void manageCities() {
        int choice;
        string city;

        do {
            cout << "\n=== Manage Cities ===\n";
            cout << "1. View Cities\n";
            cout << "2. Add City\n";
            cout << "3. Remove City\n";
            cout << "4. Back\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    cout << "\nAvailable Cities:\n";
                    for(const string& city : cities) {
                        cout << city << endl;
                    }
                    break;

                case 2:
                    cout << "Enter city name: ";
                    cin >> city;
                    if(find(cities.begin(), cities.end(), city) == cities.end()) {
                        cities.push_back(city);
                        cout << "\nCity added successfully!";
                    } else {
                        cout << "\nCity already exists!";
                    }
                    break;

                case 3:
                    cout << "Enter city name: ";
                    cin >> city;
                    auto it = find(cities.begin(), cities.end(), city);
                    if(it != cities.end()) {
                        cities.erase(it);
                        cout << "\nCity removed successfully!";
                    } else {
                        cout << "\nCity not found!";
                    }
                    break;
            }
        } while(choice != 4);
    }

    void viewRevenueReports() {
        double flightRevenue = 0, trainRevenue = 0, busRevenue = 0, packageRevenue = 0;

        // Calculate revenue from each booking type
        for(const string& record : flightDb->getAllRecords()) {
            stringstream ss(record);
            string temp;
            vector<string> fields;
            while(getline(ss, temp, ',')) {
                fields.push_back(temp);
            }
            flightRevenue += stod(fields[fields.size()-1]);
        }

        // Similarly calculate for train bookings
        for(const string& record : trainDb->getAllRecords()) {
            stringstream ss(record);
            string temp;
            vector<string> fields;
            while(getline(ss, temp, ',')) {
                fields.push_back(temp);
            }
            trainRevenue += stod(fields[fields.size()-1]);
        }

        // Calculate bus booking revenue
        for(const string& record : busDb->getAllRecords()) {
            stringstream ss(record);
            string temp;
            vector<string> fields;
            while(getline(ss, temp, ',')) {
                fields.push_back(temp);
            }
            busRevenue += stod(fields[fields.size()-1]);
        }

        // Calculate package booking revenue
        for(const string& record : packageDb->getAllRecords()) {
            stringstream ss(record);
            string temp;
            vector<string> fields;
            while(getline(ss, temp, ',')) {
                fields.push_back(temp);
            }
            packageRevenue += stod(fields[fields.size()-1]);
        }

        cout << "\n=== Revenue Report ===\n";
        cout << fixed << setprecision(2);
        cout << "Flight Bookings: Rs. " << flightRevenue << endl;
        cout << "Train Bookings: Rs. " << trainRevenue << endl;
        cout << "Bus Bookings: Rs. " << busRevenue << endl;
        cout << "Package Bookings: Rs. " << packageRevenue << endl;
        cout << "Total Revenue: Rs. " << (flightRevenue + trainRevenue + busRevenue + packageRevenue) << endl;
    }
};

// Main menu implementation
void mainMenu() {
    Logger::init();
    int choice;
    do {
        cout << "\n=== Unified Travel Reservation System ===\n";
        cout << "1. Flight Reservation\n";
        cout << "2. Train Reservation\n";
        cout << "3. Bus Reservation\n";
        cout << "4. Travel Package\n";
        cout << "5. Admin Panel\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                FlightBooking flight;
                int subChoice;
                do {
                    cout << "\n=== Flight Reservation ===\n";
                    cout << "1. Book Flight\n";
                    cout << "2. Cancel Flight\n";
                    cout << "3. Back\n";
                    cout << "Enter choice: ";
                    cin >> subChoice;

                    switch(subChoice) {
                        case 1: flight.book(); break;
                        case 2: flight.cancel(); break;
                        case 3: break;
                        default: cout << "\nInvalid choice!";
                    }
                } while(subChoice != 3);
                break;
            }
            case 2: {
                TrainBooking train;
                int subChoice;
                do {
                    cout << "\n=== Train Reservation ===\n";
                    cout << "1. Book Train\n";
                    cout << "2. Cancel Train\n";
                    cout << "3. Back\n";
                    cout << "Enter choice: ";
                    cin >> subChoice;

                    switch(subChoice) {
                        case 1: train.book(); break;
                        case 2: train.cancel(); break;
                        case 3: break;
                        default: cout << "\nInvalid choice!";
                    }
                } while(subChoice != 3);
                break;
            }
            case 3: {
                BusBooking bus;
                int subChoice;
                do {
                    cout << "\n=== Bus Reservation ===\n";
                    cout << "1. Book Bus\n";
                    cout << "2. Cancel Bus\n";
                    cout << "3. Back\n";
                    cout << "Enter choice: ";
                    cin >> subChoice;

                    switch(subChoice) {
                        case 1: bus.book(); break;
                        case 2: bus.cancel(); break;
                        case 3: break;
                        default: cout << "\nInvalid choice!";
                    }
                } while(subChoice != 3);
                break;
            }
            case 4: {
                TravelPackage package;
                int subChoice;
                do {
                    cout << "\n=== Travel Package ===\n";
                    cout << "1. Book Package\n";
                    cout << "2. Cancel Package\n";
                    cout << "3. Back\n";
                    cout << "Enter choice: ";
                    cin >> subChoice;

                    switch(subChoice) {
                        case 1: package.book(); break;
                        case 2: package.cancel(); break;
                        case 3: break;
                        default: cout << "\nInvalid choice!";
                    }
                } while(subChoice != 3);
                break;
            }
            case 5: {
                AdminPanel admin;
                if(admin.login()) {
                    admin.showMenu();
                } else {
                    cout << "\nInvalid credentials!";
                }
                break;
            }
            case 6:
                cout << "\nThank you for using our system!\n";

                Logger::log("System shutdown");
                Logger::close();
                exit(0);
            default: cout << "\nInvalid choice!";

        }
        system("CLS");
    } while(true);

}


int main2() {
    srand(time(0));
    mainMenu();

    return 0;
}
#include <iostream>    // For input and output operations
#include <vector>      // For using the vector container
#include <iomanip>     // For setting output formatting
#include <string>      // For using the string class
#include <algorithm>   // For using algorithms like find, sort, etc.
#include <fstream>     // For file input and output operations
#include <sstream>     // For string stream operations
#include <map>         // For using the map container


using namespace std;


class MenuItem
{

public:

    string name;
    double price;

    MenuItem(string n, double p) : name(n), price(p) {}

};

class OrderItem
{

public:

    MenuItem item;
    int quantity;

    OrderItem(MenuItem i, int q) : item(i), quantity(q) {}

};

class FoodOrderingSystem
 {

private:

    vector<MenuItem> vegMenu;
    vector<MenuItem> nonVegMenu;
    vector<MenuItem>ItalianCuisine;
    vector<MenuItem>FrenchCuisine;
    vector<MenuItem>ChineseCuisine;
    vector<MenuItem>japaneseCuisine;
    vector<MenuItem>indianCuisine;
    vector<MenuItem>MexicanCuisine;
    vector<MenuItem>thaiCuisine;
    vector<MenuItem>AmericanCuisine;
    vector<MenuItem>KoreanCuisine;

    vector<OrderItem> order;

    // Function to initialize vegetarian menu
    void initializeVegMenu()
    {


        vegMenu.push_back(MenuItem("Veg Burger", 5.99));
        vegMenu.push_back(MenuItem("Veg Pizza", 8.99));
        vegMenu.push_back(MenuItem("Veg Pasta", 7.99));
        vegMenu.push_back(MenuItem("Salad", 4.99));
        vegMenu.push_back(MenuItem("Veg Sandwich", 6.49));
        vegMenu.push_back(MenuItem("Paneer Tikka", 9.99));
        vegMenu.push_back(MenuItem("Veg Biryani", 6.99));
        vegMenu.push_back(MenuItem("Tofu Stir Fry", 10.99));
        vegMenu.push_back(MenuItem("idli", 6.23));
        vegMenu.push_back(MenuItem(" masala dosa", 8.12));
        vegMenu.push_back(MenuItem("neer dosa", 6.49));
        vegMenu.push_back(MenuItem("plain dosa", 4.69));
        vegMenu.push_back(MenuItem("vada pav", 8.19));
        vegMenu.push_back(MenuItem("pav bhaji", 5.76));
        vegMenu.push_back(MenuItem("combo vada pav", 5.72));
        vegMenu.push_back(MenuItem("aloo paratha", 9.93));
        vegMenu.push_back(MenuItem("veg rice", 4.63));
        vegMenu.push_back(MenuItem("fried rice", 6.10));
        vegMenu.push_back(MenuItem("samosa", 6.94));
        vegMenu.push_back(MenuItem("Veg samosa", 7.45));
        vegMenu.push_back(MenuItem("masala paratha", 8.43));
        vegMenu.push_back(MenuItem("pakoda", 7.29));
        vegMenu.push_back(MenuItem("cheese pav bhaji", 2.94));
        vegMenu.push_back(MenuItem("masala pav", 6.95));
        vegMenu.push_back(MenuItem("rava masala dosa", 5.43));
        vegMenu.push_back(MenuItem("mysore masala dosa", 5.41));
        vegMenu.push_back(MenuItem("idli fry", 6.99));
        vegMenu.push_back(MenuItem("uttappa", 6.99));
        vegMenu.push_back(MenuItem("rumoli roti", 8.31));
        vegMenu.push_back(MenuItem("mix veg", 9.00));
        vegMenu.push_back(MenuItem("veg noodles", 7.92));
        vegMenu.push_back(MenuItem("french fries", 6.45));



    }



    // Function to initialize non-vegetarian menu
    void initializeNonVegMenu()
    {


        nonVegMenu.push_back(MenuItem("Chicken Burger", 6.99));
        nonVegMenu.push_back(MenuItem("Pepperoni Pizza", 9.99));
        nonVegMenu.push_back(MenuItem("Chicken Pasta", 8.99));
        nonVegMenu.push_back(MenuItem("Grilled Chicken", 12.99));
        nonVegMenu.push_back(MenuItem("Fish Taco", 5.49));
        nonVegMenu.push_back(MenuItem("Chicken Biryani", 7.99));
        nonVegMenu.push_back(MenuItem("Lamb Kebab", 11.99));
        nonVegMenu.push_back(MenuItem("Shrimp Scampi", 13.99));
        nonVegMenu.push_back(MenuItem("Chicken 65", 6.91));
        nonVegMenu.push_back(MenuItem("Chilly fish", 7.34));
        nonVegMenu.push_back(MenuItem("Biryani", 6.45));
        nonVegMenu.push_back(MenuItem("Fish curry", 5.67));
        nonVegMenu.push_back(MenuItem("Butter chicken", 8.83));
        nonVegMenu.push_back(MenuItem("Ginger fish", 7.24));
        nonVegMenu.push_back(MenuItem("Soya chicken", 6.34));
        nonVegMenu.push_back(MenuItem("Loose prawns", 8.45));
        nonVegMenu.push_back(MenuItem("lemon chicken", 7.76));
        nonVegMenu.push_back(MenuItem("pepper  chicken", 4.99));
        nonVegMenu.push_back(MenuItem(" chicken 555", 12.94));
        nonVegMenu.push_back(MenuItem("Prawn 65", 13.23));
        nonVegMenu.push_back(MenuItem("mutton", 6.41));
        nonVegMenu.push_back(MenuItem("Mutton 65", 7.29));
        nonVegMenu.push_back(MenuItem("Crab soup", 8.63));
        nonVegMenu.push_back(MenuItem("Fry squid", 9.92));
        nonVegMenu.push_back(MenuItem("Squid Curry", 8.09));
        nonVegMenu.push_back(MenuItem("Egg rice", 7.18));
        nonVegMenu.push_back(MenuItem("Egg Curry", 6.60));

    }
    void initializeItalianCuisine()
    {
        ItalianCuisine.push_back(MenuItem("Pizza", 8.99));
        ItalianCuisine.push_back(MenuItem("Pasta", 12.99));
        ItalianCuisine.push_back(MenuItem("Risotto", 14.99));
        ItalianCuisine.push_back(MenuItem("Tiramisu", 6.99));
        ItalianCuisine.push_back(MenuItem("Tiramisu", 6.99));
        ItalianCuisine.push_back(MenuItem("Gelato", 4.99));
        ItalianCuisine.push_back(MenuItem("Bruschetta", 5.99));


    }


   // void initializeItalianCuisine()
    //{
    //    ItalianCuisine.push_back(MenuItem("Pizza", 8.99));
     //   ItalianCuisine.push_back(MenuItem("Pasta", 12.99));
     //   ItalianCuisine.push_back(MenuItem("Risotto", 14.99));
      //  ItalianCuisine.push_back(MenuItem("Tiramisu", 6.99));
     //   ItalianCuisine.push_back(MenuItem("Tiramisu", 6.99));
    //    ItalianCuisine.push_back(MenuItem("Gelato", 4.99));
    //    ItalianCuisine.push_back(MenuItem("Bruschetta", 5.99));


    //}










    void initializeFrenchCuisine()
    {
        FrenchCuisine.push_back(MenuItem("Croissants", 3.50));
        FrenchCuisine.push_back(MenuItem("Coq au Vin", 18.99));
        FrenchCuisine.push_back(MenuItem("Ratatouille", 13.99));
        FrenchCuisine.push_back(MenuItem("Bouillabaisse", 21.99));
        FrenchCuisine.push_back(MenuItem("Escargot", 15.99));
        FrenchCuisine.push_back(MenuItem("Crème Brûlée", 7.99));
        FrenchCuisine.push_back(MenuItem("Baguette", 2.50));
        FrenchCuisine.push_back(MenuItem("Quiche Lorraine", 10.99));

    }

    void initializeChineseCuisine()
    {
        ChineseCuisine.push_back(MenuItem("Peking Duck", 24.99));
        ChineseCuisine.push_back(MenuItem("Dumplings", 8.99));
        ChineseCuisine.push_back(MenuItem("Sweet and Sour Pork", 12.99));
        ChineseCuisine.push_back(MenuItem("Kung Pao Chicken", 11.99));
        ChineseCuisine.push_back(MenuItem("Hot Pot", 25.99));
        ChineseCuisine.push_back(MenuItem("Dim Sum", 15.99));
        ChineseCuisine.push_back(MenuItem("Chow Mein", 9.99));
        ChineseCuisine.push_back(MenuItem("Spring Rolls", 6.99));
    }
    void initializejapaneseCuisine()
    {

          japaneseCuisine.push_back(MenuItem("Sushi", 19.99));
         japaneseCuisine.push_back(MenuItem("Sashimi", 21.99));
         japaneseCuisine.push_back(MenuItem("Ramen", 12.99));
         japaneseCuisine.push_back(MenuItem("Tempura", 14.99));
         japaneseCuisine.push_back(MenuItem("Miso Soup", 3.99));
         japaneseCuisine.push_back(MenuItem("Okonomiyaki", 10.99));
         japaneseCuisine.push_back(MenuItem("Mochi", 4.99));
         japaneseCuisine.push_back(MenuItem("Takoyaki", 8.49));
         japaneseCuisine.push_back(MenuItem("Udon", 11.49));
         japaneseCuisine.push_back(MenuItem("Teriyaki Chicken", 13.99));
         japaneseCuisine.push_back(MenuItem("Matcha Ice Cream", 5.99));
    }
    void initializeindianCuisine()
    {
        indianCuisine.push_back(MenuItem("Butter Chicken", 14.99));
        indianCuisine.push_back(MenuItem("Paneer Tikka", 12.99));
        indianCuisine.push_back(MenuItem("Biryani", 13.49));
        indianCuisine.push_back(MenuItem("Masala Dosa", 8.99));
        indianCuisine.push_back(MenuItem("Samosa", 4.99));
       indianCuisine.push_back(MenuItem("Naan", 2.99));
       indianCuisine.push_back(MenuItem("Dal Tadka", 9.99));
       indianCuisine.push_back(MenuItem("Aloo Paratha", 7.49));
       indianCuisine.push_back(MenuItem("Chole Bhature", 10.99));
        indianCuisine.push_back(MenuItem("Pav Bhaji", 8.49));
       indianCuisine.push_back(MenuItem("Rogan Josh", 15.99));
       indianCuisine.push_back(MenuItem("Gulab Jamun", 5.49));
        indianCuisine.push_back(MenuItem("Ras Malai", 6.49));
    }
    void initializeMexicanCuisine()
    {
        MexicanCuisine.push_back(MenuItem("Tacos", 9.99));
        MexicanCuisine.push_back(MenuItem("Burritos", 12.99));
        MexicanCuisine.push_back(MenuItem("Quesadillas", 10.99));
        MexicanCuisine.push_back(MenuItem("Guacamole", 6.99));
        MexicanCuisine.push_back(MenuItem("Enchiladas", 13.99));
        MexicanCuisine.push_back(MenuItem("Churros", 5.99));
        MexicanCuisine.push_back(MenuItem("Nachos", 8.49));
        MexicanCuisine.push_back(MenuItem("Tamales", 11.49));
        MexicanCuisine.push_back(MenuItem("Fajitas", 14.99));
        MexicanCuisine.push_back(MenuItem("Pozole", 15.99));
        MexicanCuisine.push_back(MenuItem("Elote", 4.99));
    }

    void initializethaiCuisine()
    {
        thaiCuisine.push_back(MenuItem("Pad Thai", 5.99));
    thaiCuisine.push_back(MenuItem("Tom Yum", 6.99));
    thaiCuisine.push_back(MenuItem("Green Curry", 7.99));
    thaiCuisine.push_back(MenuItem("Massaman Curry", 8.99));
    thaiCuisine.push_back(MenuItem("Som Tum", 4.99));
    thaiCuisine.push_back(MenuItem("Khao Pad", 6.49));
    thaiCuisine.push_back(MenuItem("Moo Pad Krapow", 7.49));
    thaiCuisine.push_back(MenuItem("Pad See Ew", 6.99));
    thaiCuisine.push_back(MenuItem("Satay", 4.99));
    thaiCuisine.push_back(MenuItem("Khao Soi", 7.99));
    thaiCuisine.push_back(MenuItem("Gai Yang", 8.49));
    thaiCuisine.push_back(MenuItem("Sticky Rice with Mango", 3.99));
    }

    void initializeAmericanCuisine()
    {
    AmericanCuisine.push_back(MenuItem("Burger", 5.99));
     AmericanCuisine.push_back(MenuItem("Hot Dog", 3.99));
    AmericanCuisine.push_back(MenuItem("Mac and Cheese", 6.49));
    AmericanCuisine.push_back(MenuItem("Apple Pie", 2.99));
    AmericanCuisine.push_back(MenuItem("Buffalo Wings", 7.99));
    AmericanCuisine.push_back(MenuItem("Clam Chowder", 5.49));
    AmericanCuisine.push_back(MenuItem("BBQ Ribs", 12.99));
    AmericanCuisine.push_back(MenuItem("Grilled Cheese", 4.99));
    AmericanCuisine.push_back(MenuItem("Cheesesteak", 8.49));
    AmericanCuisine.push_back(MenuItem("Cornbread", 3.49));
    AmericanCuisine.push_back(MenuItem("Pancakes", 4.99));
    AmericanCuisine.push_back(MenuItem("Fried Chicken", 8.99));
    }
    void initializeKoreanCuisine()
    {
    KoreanCuisine.push_back(MenuItem("Kimchi", 3.99));
    KoreanCuisine.push_back(MenuItem("Bibimbap", 7.99));
    KoreanCuisine.push_back(MenuItem("Bulgogi", 9.99));
    KoreanCuisine.push_back(MenuItem("Japchae", 8.49));
    KoreanCuisine.push_back(MenuItem("Samgyeopsal", 12.99));
    KoreanCuisine.push_back(MenuItem("Tteokbokki", 6.49));
    KoreanCuisine.push_back(MenuItem("Jjigae", 7.49));
    KoreanCuisine.push_back(MenuItem("Banchan", 4.99));
    KoreanCuisine.push_back(MenuItem("Sundubu Jjigae", 8.99));
    KoreanCuisine.push_back(MenuItem("Hotteok", 2.99));
    KoreanCuisine.push_back(MenuItem("Kimbap", 5.99));
    KoreanCuisine.push_back(MenuItem("Hoddeok", 3.49));
    }



public:

    FoodOrderingSystem()
     {

        initializeVegMenu();
        initializeNonVegMenu();
        initializeItalianCuisine();
        initializeFrenchCuisine();
        initializeChineseCuisine();
        initializejapaneseCuisine();
        initializeindianCuisine();
        initializeMexicanCuisine();
        initializethaiCuisine();
        initializeAmericanCuisine();
        initializeKoreanCuisine();

    }

    // Function to display the vegetarian menu
    void displayVegMenu()
     {

        cout << "\nVegetarian Menu:\n";
        for (size_t i = 0; i < vegMenu.size(); ++i) {
            cout << i + 1 << ". " << vegMenu[i].name << " - $" << fixed << setprecision(2) << vegMenu[i].price << "\n";
        }

    }


    // Function to display the non-vegetarian menu
    void displayNonVegMenu()
    {


        cout << "\nNon-Vegetarian Menu:\n";
        for (size_t i = 0; i < nonVegMenu.size(); ++i)
            {
            cout << i + 1 + vegMenu.size() << ". " << nonVegMenu[i].name << " - $" << fixed << setprecision(2) << nonVegMenu[i].price << "\n";
        }


    }

    void displayItalianCuisine()
    {


        cout << "\nItalianCuisine:\n";
        for (size_t i = 0; i < ItalianCuisine.size(); ++i)
            {
            cout << i + 1 + ItalianCuisine.size() << ". " << ItalianCuisine[i].name << " - $" << fixed << setprecision(2) << ItalianCuisine[i].price << "\n";
        }


    }
    void displayFrenchCuisine()
    {


        cout << "\nFrenchCuisine:\n";
        for (size_t i = 0; i < FrenchCuisine.size(); ++i)
            {
            cout << i + 1 + FrenchCuisine.size() << ". " << FrenchCuisine[i].name << " - $" << fixed << setprecision(2) << FrenchCuisine[i].price << "\n";
        }


    }

     void displayChineseCuisine()
    {


        cout << "\nChineseCuisine:\n";
        for (size_t i = 0; i < ChineseCuisine.size(); ++i)
            {
            cout << i + 1 + ChineseCuisine.size() << ". " << ChineseCuisine[i].name << " - $" << fixed << setprecision(2) << ChineseCuisine[i].price << "\n";
        }


    }

    void displayjapaneseCuisine()
    {


        cout << "\njapaneseCuisine:\n";
        for (size_t i = 0; i < japaneseCuisine.size(); ++i)
            {
            cout << i + 1 + japaneseCuisine.size() << ". " << japaneseCuisine[i].name << " - $" << fixed << setprecision(2) << japaneseCuisine[i].price << "\n";
        }


    }

    void displayindianCuisine()
    {


        cout << "\nindianCuisine:\n";
        for (size_t i = 0; i < indianCuisine.size(); ++i)
            {
            cout << i + 1 + indianCuisine.size() << ". " << indianCuisine[i].name << " - $" << fixed << setprecision(2) <<indianCuisine[i].price << "\n";
        }


    }

    void displayMexicanCuisine()
    {


        cout << "\nMexicanCuisine:\n";
        for (size_t i = 0; i < MexicanCuisine.size(); ++i)
            {
            cout << i + 1 + MexicanCuisine.size() << ". " << MexicanCuisine[i].name << " - $" << fixed << setprecision(2) <<MexicanCuisine[i].price << "\n";
        }


    }



   void displaythaiCuisine()
    {


        cout << "\nthaiCuisine:\n";
        for (size_t i = 0; i < thaiCuisine.size(); ++i)
            {
            cout << i + 1 + thaiCuisine.size() << ". " << thaiCuisine[i].name << " - $" << fixed << setprecision(2) <<thaiCuisine[i].price << "\n";
        }


    }

    void displayAmericanCuisine()
    {


        cout << "\nAmericanCuisine:\n";
        for (size_t i = 0; i < AmericanCuisine.size(); ++i)
            {
            cout << i + 1 + AmericanCuisine.size() << ". " << AmericanCuisine[i].name << " - $" << fixed << setprecision(2) <<AmericanCuisine[i].price << "\n";
        }


    }

    void displayKoreanCuisine()
    {


        cout << "\nAmericanCuisine:\n";
        for (size_t i = 0; i < KoreanCuisine.size(); ++i)
            {
            cout << i + 1 + KoreanCuisine.size() << ". " << KoreanCuisine[i].name << " - $" << fixed << setprecision(2) <<KoreanCuisine[i].price << "\n";
        }


    }




// Function to display both menus
    void displayMenu()

     {
        displayVegMenu();
        displayNonVegMenu();
        displayItalianCuisine();
        displayFrenchCuisine();
        displayChineseCuisine();
        displayjapaneseCuisine();
        displayindianCuisine();
        displayMexicanCuisine();
        displayAmericanCuisine();
        displayKoreanCuisine();

    }

    // Function to place an order
    void placeOrder(int itemNumber, int quantity)
     {

        if (itemNumber < 1 || itemNumber > vegMenu.size() + nonVegMenu.size()) {
            cout << "Invalid item number!\n";
            return;
        }
        if (itemNumber <= vegMenu.size()) {
            order.push_back(OrderItem(vegMenu[itemNumber - 1], quantity));
        } else {
            order.push_back(OrderItem(nonVegMenu[itemNumber - vegMenu.size() - 1], quantity));
        }
        cout << "Added " << quantity << " x " << (itemNumber <= vegMenu.size() ? vegMenu[itemNumber - 1].name : nonVegMenu[itemNumber - vegMenu.size() - 1].name) << " to your order.\n";
    }



    // Function to view the current order
    void viewOrder()
    {
        if (order.empty())

            {

            cout << "Your order is empty.\n";
            return;
        }

        cout << "\nYour Order:\n";
        double total = 0.0;
        for (const auto& o : order) {
            double itemTotal = o.quantity * o.item.price;
            cout << o.quantity << " x " << o.item.name << " - $" << fixed << setprecision(2) << itemTotal << "\n";
            total += itemTotal;
        }
        cout << "Total Bill: $" << fixed << setprecision(2) << total << "\n";
    }

    // Function to clear the current order
    void clearOrder()

     {
        order.clear();
        cout << "Your order has been cleared.\n";
    }
    void searchMenu(const string& keyword) {
        cout << "\nSearch Results for '" << keyword << "':\n";
        bool found = false;
        for (const auto& item : vegMenu) {
            if (item.name.find(keyword) != string::npos) {
                cout << item.name << " - $" << fixed << setprecision(2) << item.price << "\n";
                found = true;
            }
        }
        for (const auto& item : nonVegMenu) {
            if (item.name.find(keyword) != string::npos) {
                cout << item.name << " - $" << fixed << setprecision(2) << item.price << "\n";
                found = true;
            }
        }
        if (!found) {
            cout << "No matching items found.\n";
        }
    }

    void sortMenuByPrice() {
        auto compare = [](const MenuItem& a, const MenuItem& b) {
            return a.price < b.price;
        };
        sort(vegMenu.begin(), vegMenu.end(), compare);
        sort(nonVegMenu.begin(), nonVegMenu.end(), compare);
        cout << "Menus sorted by price.\n";
    }

    void displayTopItems() {
        vector<MenuItem> allItems = vegMenu;
        allItems.insert(allItems.end(), nonVegMenu.begin(), nonVegMenu.end());
        sort(allItems.begin(), allItems.end(), [](const MenuItem& a, const MenuItem& b) {
            return a.price > b.price;
        });

        cout << "\nTop 3 Most Expensive Items:\n";
        for (size_t i = 0; i < 3 && i < allItems.size(); ++i) {
            cout << i + 1 << ". " << allItems[i].name << " - $" << fixed << setprecision(2) << allItems[i].price << "\n";
        }
    }

    void calculateAveragePrice() {
        vector<MenuItem> allItems = vegMenu;
        allItems.insert(allItems.end(), nonVegMenu.begin(), nonVegMenu.end());
        double total = 0.0;
        for (const auto& item : allItems) {
            total += item.price;
        }
        double avg = total / allItems.size();
        cout << "Average Price of All Menu Items: $" << fixed << setprecision(2) << avg << "\n";
    }

    // Function to display the receipt in a table format and clear the order
    void displayReceipt()

    {
        if (order.empty())

            {
            cout << "Your order is empty.\n";
            return;
        }

        cout << "\nReceipt:\n";
        cout << left << setw(10) << "Qty" << setw(20) << "Item" << setw(10) << "Price" << setw(10) << "Total" << "\n";
        cout << string(50, '-') << "\n"; // Separator line

        double total = 0.0;
        for (const auto& o : order)

            {
            double itemTotal = o.quantity * o.item.price;
            cout << left << setw(10) << o.quantity << setw(20) << o.item.name << setw(10) << fixed << setprecision(2) << o.item.price << setw(10) << itemTotal << "\n";
            total += itemTotal;
        }
        cout << string(50, '-') << "\n"; // Separator line
        cout << left << setw(40) << "Total Bill:" << "$" << fixed << setprecision(2) << total << "\n";

        clearOrder();
    }

};


int main3()

{


    FoodOrderingSystem system;

    int choice;
    do
        {

        cout << "\n1. Display Menu\n2. Place Order\n3. View Order\n4. Clear Order\n5.search item \n6.display items \n7.sort menu by price \n8.Display top items \n9.calculate avg price  \n10 Exit \nEnter your choice: ";
        cin >> choice;

        switch (choice)

         {
            case 1:
                system.displayMenu();
                break;
            case 2:
                int itemNumber, quantity;
                cout << "Enter item number: ";
                cin >> itemNumber;
                cout << "Enter quantity: ";
                cin >> quantity;
                system.placeOrder(itemNumber, quantity);
                break;
            case 3:
                system.viewOrder();
                break;
            case 4:
                system.clearOrder();
                break;
            case 5: {
                string keyword;
                cout << "Enter keyword to search: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, keyword);
                system.searchMenu(keyword);
                break;
            }
            case 6:
                system.displayReceipt();
                cout << "Thank you for using the Food Ordering System!\n";
                break;
            case 7:
                system.sortMenuByPrice();
                break;
            case 8:
                system.displayTopItems();
                break;
            case 9:
                system.calculateAveragePrice();
                break;
                 case 10:
               exit(0);
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }


    }
    while (choice != 11);

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <limits>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class GlobalTravelPlanner {
private:
    const int INF = numeric_limits<int>::max();
    map<string, int> cityToIndex;
    map<int, string> indexToCity;
    vector<vector<pair<int, int>>> graph;
    int numCities;

    void initializeCities() {
        vector<string> cities = {
            "Paris", "New York", "London", "Sydney", "Dubai",
            "Tokyo", "Bangkok", "Singapore", "Rome", "Berlin",
            "Los Angeles", "Amsterdam", "Cape Town", "Seoul",
            "Kuala Lumpur", "Istanbul", "Barcelona", "Santiago",
            "Mexico City"
        };

        numCities = cities.size();
        graph.resize(numCities);

        for(int i = 0; i < cities.size(); i++) {
            cityToIndex[cities[i]] = i;
            indexToCity[i] = cities[i];
        }
    }

    void addEdge(string from, string to, int distance) {
        int u = cityToIndex[from];
        int v = cityToIndex[to];
        graph[u].push_back({v, distance});
        graph[v].push_back({u, distance}); // Undirected graph
    }

public:
    GlobalTravelPlanner() {
        initializeCities();

        // Adding approximate flight distances between major cities (in km)
        // Europe connections
        addEdge("London", "Paris", 344);
        addEdge("London", "Amsterdam", 358);
        addEdge("Paris", "Barcelona", 831);
        addEdge("Paris", "Rome", 1106);
        addEdge("Amsterdam", "Berlin", 577);
        addEdge("Rome", "Istanbul", 1372);
        addEdge("Berlin", "Istanbul", 1739);

        // North America connections
        addEdge("New York", "Los Angeles", 3936);
        addEdge("Los Angeles", "Mexico City", 2499);
        addEdge("New York", "Mexico City", 3364);

        // Asia connections
        addEdge("Dubai", "Singapore", 5841);
        addEdge("Singapore", "Bangkok", 1178);
        addEdge("Bangkok", "Kuala Lumpur", 1223);
        addEdge("Tokyo", "Seoul", 1157);
        addEdge("Singapore", "Kuala Lumpur", 316);
        addEdge("Dubai", "Istanbul", 3014);

        // Intercontinental connections
        addEdge("London", "New York", 5572);
        addEdge("Dubai", "London", 5502);
        addEdge("Singapore", "Sydney", 6316);
        addEdge("Los Angeles", "Tokyo", 8773);
        addEdge("New York", "Paris", 5837);
        addEdge("Singapore", "Tokyo", 5317);
        addEdge("Dubai", "Bangkok", 4909);

        // South America and Africa connections
        addEdge("Santiago", "Mexico City", 6683);
        addEdge("Cape Town", "Dubai", 7689);
        addEdge("Cape Town", "Singapore", 9661);
    }

    pair<vector<string>, int> findShortestPath(string source, string destination) {
        if (cityToIndex.find(source) == cityToIndex.end() ||
            cityToIndex.find(destination) == cityToIndex.end()) {
            return {{}, -1}; // Invalid city
        }

        int start = cityToIndex[source];
        int end = cityToIndex[destination];

        vector<int> dist(numCities, INF);
        vector<int> prev(numCities, -1);
        dist[start] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, start});

        while(!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            if(d > dist[u]) continue;

            for(auto& edge : graph[u]) {
                int v = edge.first;
                int weight = edge.second;

                if(dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    prev[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        if (dist[end] == INF) {
            return {{}, -1}; // No path exists
        }

        // Reconstruct path
        vector<string> path;
        int current = end;
        while(current != -1) {
            path.push_back(indexToCity[current]);
            current = prev[current];
        }
        reverse(path.begin(), path.end());

        return {path, dist[end]};
    }

    void printPath(const vector<string>& path, int distance) {
        if (path.empty() || distance == -1) {
            cout << "\nNo valid route found between these cities.\n";
            cout << "Please check if the cities are correctly spelled and connected in our network.\n";
            return;
        }

        cout << "\nRecommended Flight Route:\n";
        cout << "========================\n";
        for(int i = 0; i < path.size(); i++) {
            cout << path[i];
            if(i < path.size() - 1) cout << " -> ";
        }
        cout << "\nTotal Distance: " << distance << " km\n";
        cout << "Estimated Flight Time: " << fixed << setprecision(1)
             << (distance / 800.0) << " hours (assuming average speed of 800 km/h)\n";
    }

    void listAvailableCities() {
        cout << "\nAvailable Cities:\n";
        cout << "=================\n";
        vector<string> cities;
        for(const auto& pair : cityToIndex) {
            cities.push_back(pair.first);
        }
        sort(cities.begin(), cities.end());

        for(const string& city : cities) {
            cout << city << endl;
        }
        cout << endl;
    }
};

int main12() {
    GlobalTravelPlanner planner;
    string source, destination;
    char choice;

    do {
        cout << "\nGlobal Travel Route Planner\n";
        cout << "==========================\n";
        cout << "1. Find route between cities\n";
        cout << "2. List all available cities\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case '1': {
                cout << "Enter departure city: ";
                getline(cin, source);
                cout << "Enter destination city: ";
                getline(cin, destination);

                pair<vector<string>, int> result = planner.findShortestPath(source, destination);
                planner.printPath(result.first, result.second);
                break;
            }
            case '2': {
                planner.listAvailableCities();
                break;
            }
            case '3': {
                cout << "Thank you for using Global Travel Route Planner!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    } while(choice != '3');

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <limits>
#include <iomanip>
using namespace std;

const int INF = numeric_limits<int>::max();
const int V = 21; // Number of cities including India

// Structure to represent a city
struct City {
    string name;
    vector<pair<int, int>> neighbors; // pair of (destination city index, distance in km)
};

class InternationalGraph {
private:
    vector<City> cities;
    map<string, int> cityToIndex;

    void initializeCities() {
        vector<string> cityNames = {
            "India", "Paris", "New York", "London", "Sydney",
            "Dubai", "Tokyo", "Bangkok", "Singapore", "Rome",
            "Berlin", "Los Angeles", "Amsterdam", "Cape Town", "Seoul",
            "Kuala Lumpur", "Istanbul", "Barcelona", "Santiago", "Mexico City",
            "Delhi" // Adding Delhi as a connection point in India
        };

        // Initialize cities
        for(int i = 0; i < V; i++) {
            cities.push_back({cityNames[i], vector<pair<int, int>>()});
            cityToIndex[cityNames[i]] = i;
        }

        // Add edges (distances in kilometers)
        // Connections from India (through Delhi)
        addEdge("India", "Delhi", 0);  // Internal connection
        addEdge("Delhi", "Dubai", 2184);
        addEdge("Delhi", "Bangkok", 2950);
        addEdge("Delhi", "Singapore", 4160);
        addEdge("Delhi", "Istanbul", 4458);

        // European connections
        addEdge("London", "Paris", 344);
        addEdge("London", "Amsterdam", 358);
        addEdge("Paris", "Barcelona", 831);
        addEdge("Paris", "Rome", 1106);
        addEdge("Paris", "Berlin", 878);
        addEdge("Berlin", "Amsterdam", 577);
        addEdge("Berlin", "Istanbul", 1735);
        addEdge("Rome", "Istanbul", 1372);
        addEdge("Barcelona", "Rome", 860);

        // Asian connections
        addEdge("Dubai", "Istanbul", 3014);
        addEdge("Dubai", "Bangkok", 4909);
        addEdge("Singapore", "Bangkok", 1437);
        addEdge("Singapore", "Kuala Lumpur", 316);
        addEdge("Tokyo", "Seoul", 1157);
        addEdge("Bangkok", "Kuala Lumpur", 1222);
        addEdge("Seoul", "Tokyo", 1157);

        // American connections
        addEdge("New York", "Los Angeles", 3935);
        addEdge("New York", "Mexico City", 3364);
        addEdge("Los Angeles", "Mexico City", 2499);
        addEdge("Mexico City", "Santiago", 6683);

        // Oceania connections
        addEdge("Sydney", "Singapore", 6291);

        // Major international routes
        addEdge("London", "New York", 5567);
        addEdge("Paris", "New York", 5837);
        addEdge("Los Angeles", "Tokyo", 8773);
        addEdge("Singapore", "Sydney", 6291);
        addEdge("Dubai", "London", 5495);
        addEdge("Tokyo", "Los Angeles", 8773);
        addEdge("New York", "London", 5567);
        addEdge("Cape Town", "Dubai", 7689);
    }

public:
    InternationalGraph() {
        initializeCities();
    }

    void addEdge(const string& from, const string& to, int distance) {
        int u = cityToIndex[from];
        int v = cityToIndex[to];
        cities[u].neighbors.push_back({v, distance});
        cities[v].neighbors.push_back({u, distance}); // Since it's an undirected graph
    }

    pair<vector<int>, vector<int>> dijkstra(int src) {
        vector<int> dist(V, INF);
        vector<int> prev(V, -1);
        vector<bool> visited(V, false);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            if(visited[u]) continue;
            visited[u] = true;

            for(const auto& neighbor : cities[u].neighbors) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if(!visited[v] && dist[u] != INF && dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    prev[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        return {dist, prev};
    }

    void findShortestPath(const string& to) {
        int src = cityToIndex["India"];
        int dest = cityToIndex[to];

        pair<vector<int>, vector<int>> result = dijkstra(src);
        vector<int> distances = result.first;
        vector<int> previous = result.second;

        if(distances[dest] == INF) {
            cout << "No path exists between India and " << to << endl;
            return;
        }

        // Reconstruct path
        vector<int> path;
        for(int at = dest; at != -1; at = previous[at]) {
            path.push_back(at);
        }
        // Reverse the path since we built it backwards
        for(int i = 0, j = path.size()-1; i < j; i++, j--) {
            swap(path[i], path[j]);
        }

        // Print result
        cout << "\nShortest path from India to " << to << ":\n";
        cout << "Total distance: " << distances[dest] << " km\n";
        cout << "Path: ";
        for(int i = 0; i < path.size(); i++) {
            cout << cities[path[i]].name;
            if(i < path.size() - 1) cout << " -> ";
        }
        cout << endl;
    }

    void printAllCities() {
        cout << "\nAvailable Cities:\n";
        for(const auto& city : cities) {
            if(city.name != "Delhi") // Don't show internal connection
                cout << city.name << endl;
        }
    }
};

int main22() {
    InternationalGraph graph;
    string toCity;
    char choice;

    cout << "\nInternational Distance Calculator (from India)\n";
    cout << "=============================================\n";

    do {
        cout << "\n1. Find shortest path to a city\n";
        cout << "2. View all cities\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                cout << "\nEnter destination city: ";
                cin.ignore();
                getline(cin, toCity);
                graph.findShortestPath(toCity);
                break;

            case '2':
                graph.printAllCities();
                break;

            case '3':
                cout << "\nThank you for using the International Distance Calculator!\n";
                return 0;

            default:
                cout << "\nInvalid choice!\n";
        }
    } while(true);

    return 0;
}

int main4() {
    int choice;
    bool running = true;

    while(running) {
        // Display menu
        cout << "\n=== ==== ===" << endl;
        cout << "1. National" << endl;
        cout << "2. International" << endl;
        cout << "Enter your choice (1-2): ";

        cin >> choice;

        switch(choice) {
            case 1: {main12();
                break;
            }
            case 2: {main22();
                break;
            }
            }

        }
    }
#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <conio.h>  // For getch() to hide password input
using namespace std;

void login();
void registr();
void forgot();
void displayMenu();

void displayMenu() {
    int choice;
    cout << "***********************************************************************\n\n\n";
    cout << "                      Welcome to login page                               \n\n";
    cout << "*******************        MENU        *******************************\n\n";
    cout << "1. LOGIN" << endl;
    cout << "2. REGISTER" << endl;
    cout << "3. FORGOT PASSWORD (or) USERNAME" << endl;
    cout << "4. Exit" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    cout << endl;

    switch(choice) {
    case 1:
        login();
        break;
    case 2:
        registr();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "Thanks for using this program.\nThis program is created by @InhaleCode(rxn)\n\n";
        break;
    default:
        cout << "Invalid choice. Please try again..\n";
        displayMenu();
    }
}

void login() {
    int count = 0;
    string user, pass, u, p;
    cout << "Please enter the following details" << endl;
    cout << "USERNAME : ";
    cin >> user;
    cout << "PASSWORD : ";

    // Hide password input
    char ch;
    pass = "";
    while ((ch = _getch()) != 13) {  // 13 is the ASCII code for Enter key
        pass.push_back(ch);
        cout << "*";  // Display '*' for each character typed
    }
    cout << endl;

    ifstream input("database.txt");
    while(input >> u >> p) {
        if(u == user && p == pass) {
            count = 1;
        }
    }
    input.close();

    if(count == 1) {
        cout << "\nHello " << user << "\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
        displayMenu();
    } else {
        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        displayMenu();
    }
}

void registr() {
    string reguser, regpass;
    cout << "Enter the username : ";
    cin >> reguser;
    cout << "\nEnter the password : ";

    // Hide password input
    char ch;
    regpass = "";
    while ((ch = _getch()) != 13) {  // 13 is the ASCII code for Enter key
        regpass.push_back(ch);
        cout << "*";  // Display '*' for each character typed
    }
    cout << endl;

    ofstream reg("database.txt", ios::app);
    reg << reguser << ' ' << regpass << endl;
    cout << "\nRegistration Successful\n";
    displayMenu();
}

void forgot() {
    int ch;
    cout << "Forgotten? We're here for help\n";
    cout << "1. Search your ID by username" << endl;
    cout << "2. Search your ID by password" << endl;
    cout << "3. Main menu" << endl;
    cout << "Enter your choice: ";
    cin >> ch;

    switch(ch) {
    case 1: {
        int count = 0;
        string searchuser, su, sp;
        cout << "\nEnter your remembered username: ";
        cin >> searchuser;

        ifstream searchu("database.txt");
        while(searchu >> su >> sp) {
            if(su == searchuser) {
                count = 1;
            }
        }
        searchu.close();

        if(count == 1) {
            cout << "\nHurray, account found\n";
            cout << "Your password is " << sp << endl;
            displayMenu();
        } else {
            cout << "\nSorry, Your userID is not found in our database\n";
            displayMenu();
        }
        break;
    }
    case 2: {
        int count = 0;
        string searchpass, su2, sp2;
        cout << "\nEnter the remembered password: ";
        cin >> searchpass;

        ifstream searchp("database.txt");
        while(searchp >> su2 >> sp2) {
            if(sp2 == searchpass) {
                count = 1;
            }
        }
        searchp.close();

        if(count == 1) {
            cout << "\nYour password is found in the database\n";
            cout << "Your ID is: " << su2 << endl;
            displayMenu();
        } else {
            cout << "Sorry, We could not find your password in our database\n";
            displayMenu();
        }
        break;
    }
    case 3:
        displayMenu();
        break;
    default:
        cout << "Sorry, You entered an invalid choice. Kindly try again\n";
        forgot();
    }
}


int main5() {
    displayMenu();
    return 0;
}
int main() {
    int choice;
    bool running = true;

    while(running) {
        // Display menu
        cout << "\n=== Simple Calculator ===" << endl;
        cout << "1. Travel_agency" << endl;
        cout << "2. Travel_mang" << endl;
        cout << "3. Food" << endl;
        cout << "4.shortest path" << endl;
         cout << "5.Register" << endl;
        cout << "Enter your choice (1-5): ";

        cin >> choice;

        switch(choice) {
            case 1: {main1();
                break;
            }
            case 2: {main2();
                break;
            }
            case 3: {main3();
                break;
            }
            case 4: {main4();
                break;
            }
            case 5: {main5();
                break;
            }


        }
    }

    return 0;
}


