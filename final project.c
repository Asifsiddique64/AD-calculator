
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

//functions of prototype
float area(float a);
float primtr(float b);
float arearc(float a,float b);
float primtrrc(float a,float b);
float ntlarea(float a,float b);
float ntlprimtr(float a,float b,float c);
float starea(float a,float b,float c);
float etarea(float a);
float etprimtr(float a);
float itprimtr(float a,float b);

//main menu functions
void a();
void b();
void c();
void d();
void e();

void main()
{
    int z;
    char u;
    system("color f0");
    begin:
    system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n");
    {

    printf("1. Basic calculator\n");
    }
    printf("2. Geometry\n");
    printf("3. Physics\n");
    printf("4. Conversion\n");
    printf("5. Matrix\n");
    printf("0. Exit\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ncreated by,\nAsif||Milton||Saiful||Humaun\n");
    scanf("%d",&z);
    if(z==1)
     a();
    else if(z==2)
     b();
    else if(z==3)
     c();
    else if(z==4)
     d();
    else if(z==5)
     e();
    else if(z==0)
        exit(0);
    else if(z<0 || z>6)
    printf("invalid choice");
    printf("\n\n\nDo you wanna keep calculating in this awosome calculator (Y/N)?\n");
    scanf("%s",&u);
    u=toupper(u);
    if(u=='Y')
        goto begin;
    getch();

}



//basic calculator
void a()
{
            int cases1,bfvalue1,bfvalue2;

            system("cls");
            system("color fc");
            printf("\t\t\t***CALCULATOR***\n");
            printf("\t\t\t >>fatakeshto<<\n\n\n");

            printf("You have chosen basic functions....\n\n");
            printf("1 .Addition\n");
            printf("2 .Subtraction\n");
            printf("3 .Multiplication\n");
            printf("4 .Division\n");
            printf("5 .Power\n");
            printf("6 .Root\n");
            printf("7 .Modulus\n");
            printf("8 .Percentage\n");
            printf("9 .Factorial\n");
            printf("10.Absolute value\n");
            scanf("%d",&cases1);
            if(cases1==0)
                exit(0);
            switch(cases1)
            {
            case 1://addition
                {
                    system("cls");
                    int jog;
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");
                    printf("Lets do subtraction...\n\n");
                    printf("enter value number one\n");
                    scanf("%d",&bfvalue1);
                    printf("enter value number two\n");
                    scanf("%d",&bfvalue2);
                    jog=add(bfvalue1,bfvalue2);
                    //printf("Subtraction of %d and %d is :\n %d\n",bfvalue1,bfvalue2,bfvalue1-bfvalue2);
                    printf("%d\n",jog);
                    break;

                }
            case 2://subtraction
                {
                    int biog;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("Lets do subtraction...\n\n");
                    printf("enter value number one\n");
                    scanf("%d",&bfvalue1);
                    printf("enter value number two\n");
                    scanf("%d",&bfvalue2);
                    biog=subs(bfvalue1,bfvalue2);
                    //printf("Subtraction of %d and %d is :\n %d\n",bfvalue1,bfvalue2,bfvalue1-bfvalue2);
                    printf("%d\n",biog);
                    break;
                }
            case 3://multiplication
                {
                    int gun;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("Lets do subtraction...\n\n");
                    printf("enter value number one\n");
                    scanf("%d",&bfvalue1);
                    printf("enter value number two\n");
                    scanf("%d",&bfvalue2);
                    gun=multi(bfvalue1,bfvalue2);
                    //printf("Subtraction of %d and %d is :\n %d\n",bfvalue1,bfvalue2,bfvalue1-bfvalue2);
                    printf("%d\n",gun);
                    break;
                }
            case 4://division
                {
                    int vag;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("Lets do subtraction...\n\n");
                    printf("enter value number one\n");
                    scanf("%d",&bfvalue1);
                    printf("enter value number two\n");
                    scanf("%d",&bfvalue2);
                    vag=div(bfvalue1,bfvalue2);
                    //printf("Subtraction of %d and %d is :\n %d\n",bfvalue1,bfvalue2,bfvalue1-bfvalue2);
                    printf("%d\n",vag);
                    break;
                }
            case 5://power
               {
                  {
                       float bfvalue1,bfvalue2,power;
                       system("cls");
                       printf("\t\t\t***CALCULATOR***\n");
                       printf("\t\t\t >>fatakeshto<<\n\n\n");

                       printf("enter base\n");
                       scanf("%f",&bfvalue1);
                       printf("enter power\n");
                       scanf("%f",&bfvalue2);
                       power=pow(bfvalue1,bfvalue2);
                       printf("Your desired result is :%f\n",power);
                       break;
                  }

               }
            case 6://root
                {
                       float bfvalue1,bfvalue2,rt;
                       system("cls");
                       printf("\t\t\t***CALCULATOR***\n");
                       printf("\t\t\t >>fatakeshto<<\n\n\n");

                       printf("enter power\n");
                       scanf("%f",&bfvalue1);
                       printf("enter value\n");
                       scanf("%f",&bfvalue2);
                       rt=pow(bfvalue2,pow(bfvalue1,-1));
                       printf("Your desired result is :%f\n",rt);
                       break;
                }
            case 7://modulus
                {
                    int bfvalue1,bfvalue2,mod;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("input the value \n ");
                    scanf("%d",&bfvalue1);
                    printf("module %d with \n",bfvalue1);
                    scanf("%d",&bfvalue2);
                    mod=bfvalue1%bfvalue2;
                    printf("your desired value is %d\n",mod);
                    break;
                }
            case 8://percentage
                {
                    float a,b,c;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("Input the value\n");
                    scanf("%f",&a);
                    printf("percentage\n");
                    scanf("%f",&b);
                    c=a*b;
                    printf("%f percent of %f is : %f",b,a,c/100);
                    break;
                }
            case 9://factorial
                {
                    float a,b,c=1;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("Input the value\n");
                    scanf("%f",&a);
                    for(b=1; b<=a; b++)
                    {
                        c=c*b;
                    }
                    printf("Factorial of %f is : %f\n",a,c);
                    break;

                }
            case 10://absolute value
                {

                    float a,b,c=1;
                    system("cls");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("Input the value\n");
                    scanf("%f",&a);
                    if(a==0)
                    {
                        printf("Absolute value of 0 is 0\n");
                    }
                    else if(a<0)
                    {
                        printf("Absolute value of %f is : %f",a,-a);
                    }
                    else if(a>0)
                    {
                        printf("Absolute value of %f is : %f\n",a,a);
                    }

                    break;               }

            default:
                {
                    printf("Done");
                }

                break;

            }


}




//Geometry
void b()
{
                    int cases1;
                    system("cls");
                    system("color f9");
                    printf("\t\t\t***CALCULATOR***\n");
                    printf("\t\t\t >>fatakeshto<<\n\n\n");

                    printf("You have chosen geometry....\n\n\n");
                    printf("Select any topic from below of your choice\n\n");
                    printf("1 .circle\n");
                    printf("2 .Rectangle\n");
                    printf("3 .Triangle\n");
                    printf("4 .Cube\n");
                    printf("5 .Sphere\n");
                    printf("6 .Cylinder\n");
                    printf("7 .Cone\n");
                    printf("8 .Parallelogram\n");
                    printf("9 .Rhombus\n");
                    printf("10.Trapezoid\n");
                    scanf("%d",&cases1);
                    switch(cases1)
                    {
                    case 1://circle
                        {
                                int cases2;
                                system("cls");
                                printf("\t\t\t***CALCULATOR***\n");
                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                printf("You have chosen circle....\n1.Area\n2.Perimeter\n3.Diameter\n");
                                scanf("%d",&cases2);
                                switch(cases2)
                                    {
                                        case 1:
                                            {
                                                float ara,r;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter the radius\n");
                                                scanf("%f",&r);
                                                ara=area(r);
                                                printf("Area of that circle is: %f\n",ara);
                                                break;
                                            }
                                        case 2:
                                            {
                                                float pmr,r;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter the radius\n");
                                                scanf("%f",&r);
                                                pmr=primtr(r);
                                                printf("Perimeter of the circle is: %f\n",pmr);
                                                break;
                                            }
                                        case 3:
                                            {
                                                float dia,r;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter the radius\n");
                                                scanf("%f",&r);
                                                dia=2*r;
                                                printf("the diameter is %f\n",dia);
                                                break;
                                            }
                                        default:
                                            {
                                                printf("invalid");
                                            }
                                    }
                                    break;
                        }
                    case 2://rectangle
                        {
                                int cases2;
                                system("cls");
                                printf("\t\t\t***CALCULATOR***\n");
                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                printf("You have chosen rectangle....\n1.Area\n2.Perimeter\n");
                                scanf("%d",&cases2);
                                switch(cases2)
                                    {
                                        case 1:
                                            {
                                                float ara,l,h;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter the length\n");
                                                scanf("%f",&l);
                                                printf("enter the width\n");
                                                scanf("%f",&h);
                                                ara=arearc(l,h);
                                                printf("Area of that rectangle is: %f\n",ara);
                                                break;
                                            }
                                        case 2:
                                            {
                                                float pmr,l,h;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter the length\n");
                                                scanf("%f",&l);
                                                printf("enter the width\n");
                                                scanf("%f",&h);
                                                pmr=primtrrc(l,h);
                                                printf("Perimeter of the rectangle is: %f\n",pmr);
                                                break;
                                            }
                                        default:
                                            {
                                                printf("invalid");
                                            }
                                    }
                                    break;

                        }
                    case 3:
                            {
                                int a;//triangle
                                system("cls");
                                printf("\t\t\t***CALCULATOR***\n");
                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                printf("You have chosen Triangle....\n\n\n");
                                printf("choice what kind of triangle you want results of...\n\n");
                                printf("1.Normal triangle\n2.Right angle triangle\n3.Scalene triangle\n4.Equilateral triangle\n5.Obtuse angle Triangle\n6.Isosceles triangle\n\n");
                                scanf("%d",&a);
                                switch(a)
                                {
                                case 1://nt
                                    {
                                        system("cls");
                                        printf("\t\t\t***CALCULATOR***\n");
                                        printf("\t\t\t >>fatakeshto<<\n\n\n");

                                        printf("Normal triangle\n");
                                        printf("what you wanna know:\n");
                                        printf("1.Area\n2.Perimeter\n");
                                        int b;
                                        scanf("%d",&b);
                                        switch(b)
                                        {
                                        case 1:
                                            {
                                            float x,y,z;
                                            system("cls");
                                            printf("\t\t\t***CALCULATOR***\n");
                                            printf("\t\t\t >>fatakeshto<<\n\n\n");

                                            printf("enter height\n");
                                            scanf("%f",&x);
                                            printf("enter base\n");
                                            scanf("%f",&y);
                                            z=ntlarea(x,y);
                                            printf("your desired result is :%f",z);
                                            break;
                                            }
                                        case 2:
                                            {
                                                float x,y,z,pri;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter first side\n");
                                                scanf("%f",&x);
                                                printf("enter second side\n");
                                                scanf("%f",&y);
                                                printf("enter third side\n");
                                                scanf("%f",&z);
                                                pri=ntlprimtr(x,y,z);
                                                printf("your desired result is: %f\n",pri);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                        case 2://rat
                                            {
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("right angle triangle\n");
                                                printf("1.Area\n");
                                                int b;
                                                scanf("%d",&b);
                                                switch(b)
                                                    {
                                                        case 1:
                                                            {
                                                                float x,y,z;
                                                                system("cls");
                                                                printf("\t\t\t***CALCULATOR***\n");
                                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                                printf("enter height\n");
                                                                scanf("%f",&x);
                                                                printf("enter base\n");
                                                                scanf("%f",&y);
                                                                z=ntlarea(x,y);
                                                                printf("your desired result is :%f\n",z);
                                                                break;
                                                            }
                                                        default:
                                                            {
                                                                printf("invalid");
                                                            }

                                                    }
                                                    break;

                                            }
                                case 3://st
                                    {
                                        system("cls");
                                        printf("\t\t\t***CALCULATOR***\n");
                                        printf("\t\t\t >>fatakeshto<<\n\n\n");


                                        printf("scalene triangle\n");
                                        printf("what you wanna know:\n");
                                        printf("1.Area\n2.Perimeter\n");
                                        int b;
                                        scanf("%d",&b);
                                        switch(b)
                                        {
                                        case 1:
                                            {
                                            system("cls");
                                            printf("\t\t\t***CALCULATOR***\n");
                                            printf("\t\t\t >>fatakeshto<<\n\n\n");

                                            float x,y,z,q;
                                            printf("enter side one\n");
                                            scanf("%f",&x);
                                            printf("enter side two\n");
                                            scanf("%f",&y);
                                            printf("enter side three\n");
                                            scanf("%f",&z);
                                            q=starea(x,y,z);
                                            printf("your desired result is :%f",q);
                                            break;
                                            }
                                        case 2:
                                            {
                                                float x,y,z,pri;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter first side\n");
                                                scanf("%f",&x);
                                                printf("enter second side\n");
                                                scanf("%f",&y);
                                                printf("enter third side\n");
                                                scanf("%f",&z);
                                                pri=ntlprimtr(x,y,z);
                                                printf("your desired result is: %f\n",pri);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                case 4://et
                                    {
                                        system("cls");
                                        printf("\t\t\t***CALCULATOR***\n");
                                        printf("\t\t\t >>fatakeshto<<\n\n\n");


                                        printf("Equilateral triangle\n");
                                        printf("what you wanna know:\n");
                                        printf("1.Area\n2.Perimeter\n");
                                        int b;
                                        scanf("%d",&b);
                                        switch(b)
                                        {
                                        case 1:
                                            {
                                            float x,y;
                                            system("cls");
                                            printf("\t\t\t***CALCULATOR***\n");
                                            printf("\t\t\t >>fatakeshto<<\n\n\n");

                                            printf("enter any side of the triangle\n");
                                            scanf("%f",&x);
                                            y=etarea(x);
                                            printf("your desired result is :%f",y);
                                            break;
                                            }
                                        case 2:
                                            {
                                                float x,y;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter any side of the triangle\n");
                                                scanf("%f",&x);
                                                y=etprimtr(x);
                                                printf("your desired result is: %f\n",y);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                case 5://oat
                                    {
                                        system("cls");
                                        printf("\t\t\t***CALCULATOR***\n");
                                        printf("\t\t\t >>fatakeshto<<\n\n\n");

                                        printf("Obtuse angle triangle\n");
                                        printf("what you wanna know:\n");
                                        printf("1.Area\n2.Perimeter\n");
                                        int b;
                                        scanf("%d",&b);
                                        switch(b)
                                        {
                                        case 1:
                                            {
                                            float x,y,z;
                                            system("cls");
                                            printf("\t\t\t***CALCULATOR***\n");
                                            printf("\t\t\t >>fatakeshto<<\n\n\n");

                                            printf("enter height\n");
                                            scanf("%f",&x);
                                            printf("enter base\n");
                                            scanf("%f",&y);
                                            z=ntlarea(x,y);
                                            printf("your desired result is :%f",z);
                                            break;
                                            }
                                        case 2:
                                            {
                                                float x,y,z,pri;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter first side\n");
                                                scanf("%f",&x);
                                                printf("enter second side\n");
                                                scanf("%f",&y);
                                                printf("enter third side\n");
                                                scanf("%f",&z);
                                                pri=ntlprimtr(x,y,z);
                                                printf("your desired result is: %f\n",pri);
                                                break;
                                            }
                                        }
                                        break;

                                    }
                                case 6://it
                                    {
                                        system("cls");
                                        printf("\t\t\t***CALCULATOR***\n");
                                        printf("\t\t\t >>fatakeshto<<\n\n\n");

                                        printf("Isosceles triangle\n");
                                        printf("what you wanna know:\n");
                                        printf("1.Area\n2.Perimeter\n");
                                        int b;
                                        scanf("%d",&b);
                                        switch(b)
                                        {
                                        case 1:
                                            {
                                            float x,y,z;
                                            system("cls");
                                            printf("\t\t\t***CALCULATOR***\n");
                                            printf("\t\t\t >>fatakeshto<<\n\n\n");

                                            printf("enter height\n");
                                            scanf("%f",&x);
                                            printf("enter base\n");
                                            scanf("%f",&y);
                                            z=ntlarea(x,y);
                                            printf("your desired result is :%f",z);
                                            break;
                                            }
                                        case 2:
                                            {
                                                float x,z,pri;
                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");

                                                printf("enter length of first two sides\n");
                                                scanf("%f",&x);
                                                printf("enter third side\n");
                                                scanf("%f",&z);
                                                pri=itprimtr(x,z);
                                                printf("your desired result is: %f\n",pri);
                                                break;
                                            }
                                        }
                                        break;

                                    }
                                        default:
                                            {
                                                printf("invalid");
                                            }
                                }
                                break;

                            }
                                        case 4://cube
                                            {
                                                    int a;
                                                     system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                    printf ("Cube...\n\n\n");
                                                    printf("1.volume\n");
                                                    printf("2.surface area\n");
                                                    scanf ("%d", &a);
                                                    switch(a)
                                                        {
                                                            case 1:
                                                            {
                                                            float b,c,d;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input side\n");
                                                            scanf("%f",&b);
                                                            c=b*b*b;
                                                            printf ("volume: %f", c);
                                                            break;
                                                            }
                                                            case 2:
                                                            {
                                                            float b,c,d;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf ("input side\n");
                                                            scanf("%f",&b);
                                                            c=6*a*a;
                                                            printf("surface area: %f", c);
                                                            break;
                                                            }
                                                        }
                                                        break;
                                            }
                                    case 5://sphere
                                        {
                                               int a;
                                               system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                float r,pi=3.1416,volume,surfacearea;
                                                printf("sphere.....\n");
                                                printf("1. volume\n");
                                                printf("2. surface area\n");
                                                scanf("%d",&a);
                                                switch (a)
                                                {
                                                case 1:
                                                {
                                                    system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                printf("volume\n");
                                                printf("enter radius\n");
                                                scanf("%f",&r);
                                                volume=1.3334*pi*pow(r,3);
                                                printf("the volume is:%f",volume);
                                                break;

                                                }
                                                case 2:
                                                    system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                printf("surface area\n");
                                                printf("enter radius\n");
                                                scanf("%f",&r);
                                                surfacearea=4*pi*pow(r,2);
                                                printf("the surface area is:%f",surfacearea);
                                                break;
                                                }
                                                break;

                                        }
                                        case 6://cylinder
                                        {
                                            int a;
                                            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            printf ("Cylinder...\n\n\n");
                                            printf("chose any type of cylinder\n\n");
                                            printf("1.Solid right circular\n");
                                            printf("2.Right circular hollow\n");
                                            scanf ("%d", &a);
                                            switch(a)
                                            {
                                            case 1:
                                            {
                                            int a;
                                            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            printf("Solid right circular\n\n\n");
                                            printf("1.Volume\n");
                                            printf("2.Curved surface area\n");
                                            printf("3.Total surface area\n");
                                            scanf("%d",&a);
                                            switch(a)
                                            {
                                            case 1:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            float a,b,c=3.1416,d;
                                            printf("Volume\n\n\n");
                                            printf("Input height\n");
                                            scanf("%f",&a);
                                            printf("Input radius\n");
                                            scanf("%f",&b);
                                            d=c*b*b*b*a;
                                            printf("Volume : %30.20f",d);
                                            break;
                                                }
                                            case 2:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            float a,b,c=3.1416,d;
                                            printf("Curved surface area\n\n\n");
                                            printf("Input height\n");
                                            scanf("%f",&a);
                                            printf("Input radius\n");
                                            scanf("%f",&b);
                                            d=2*a*b*c;
                                            printf("Volume : %30.20f",d);
                                            break;
                                            }
                                            case 3:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            float a,b,c=3.1416,d;
                                            printf("Total surface area\n\n\n");
                                            printf("Input height\n");
                                            scanf("%f",&a);
                                            printf("Input radius\n");
                                            scanf("%f",&b);
                                            d=2*b*c*(a+b);
                                            printf("Volume : %30.20f",d);
                                            break;
                                            }
                                            }
                                            }
                                            case 2:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            int a;
                                            printf("Right circular hollow\n\n\n");
                                            printf("1.Volume\n");
                                            printf("2.Curved surface area\n");
                                            printf("3.Total surface area\n");
                                            scanf("%d",&a);
                                            switch(a)
                                            {
                                            case 1:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            float a,b,c=3.1416,d,e;
                                            printf("Volume\n\n\n");
                                            printf("Input height\n");
                                            scanf("%f",&a);
                                            printf("Input total radius\n");
                                            scanf("%f",&b);
                                            printf("Input inside\n");
                                            scanf("%f",&d);
                                            e=c*a*((b*b)-(d*d));
                                            printf("Volume : %30.20f",e);
                                            break;
                                            }
                                            case 2:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            float a,b,c=3.1416,d,e;
                                            printf("Curved surface area\n\n\n");
                                            printf("Input height\n");
                                            scanf("%f",&a);
                                            printf("Input total radius\n");
                                            scanf("%f",&b);
                                            printf("Input inside\n");
                                            scanf("%f",&d);
                                            e=2*c*a*(b+d);
                                            printf("Curved surface area : %30.20f",e);
                                            break;
                                            }
                                            case 3:
                                            {
                                                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                            float a,b,c=3.1416,d,e;
                                            printf("Total surface area\n\n\n");
                                            printf("Input height\n");
                                            scanf("%f",&a);
                                            printf("Input total radius\n");
                                            scanf("%f",&b);
                                            printf("Input inside\n");
                                            scanf("%f",&d);
                                            e=2*c*(b+d)*(b-d+a);
                                            printf("Total surface area : %30.20f",e);
                                            break;
                                            }
                                            }
                                            }
                                        }

                                        }
                                    case 7://cone
                                        {
                                                int a;

                                                system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                printf ("Cone...\n\n\n");
                                                printf("1.volume\n");
                                                printf("2.surface area\n");
                                                scanf ("%d", &a);
                                                    switch(a)
                                                        {
                                                            case 1:
                                                            {
                                                            float b,c,d=3.1416,e;
                                                            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input radius\n");
                                                            scanf("%f",&b);
                                                            printf("input height\n");
                                                            scanf("%f",&c);
                                                            e=.33334*d*b*b*c;
                                                            printf ("volume: %f", e);
                                                            break;
                                                            }
                                                            case 2:
                                                            {
                                                            float b,c,d=3.1416,e;
                                                            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input radius\n");
                                                            scanf("%f",&b);
                                                            printf("input height\n");
                                                            scanf("%f",&c);
                                                            e=d*b*sqrt((b*b)+(c*c));
                                                            printf ("Surface area: %f", e);
                                                            break;
                                                            }
                                                        }
                                                        break;
                                        }
                                    case 8://parallelogram
                                        {
                                                int a;
                                                     system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                    printf ("Parallelogram...\n\n\n");
                                                    printf("1.Area\n");
                                                    printf("2.Perimeter\n");
                                                    scanf ("%d", &a);
                                                    switch(a)
                                                        {
                                                            case 1:
                                                            {
                                                            float b,c,d;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input side\n");
                                                            scanf("%f",&b);
                                                            printf("input height\n");
                                                            scanf("%f",&d);
                                                            c=b*d;
                                                            printf ("Area: %f", c);
                                                            break;
                                                            }
                                                            case 2:
                                                            {
                                                            float b,c,d;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf ("input side one\n");
                                                            scanf("%f",&b);
                                                            printf ("input side two\n");
                                                            scanf("%f",&d);
                                                            c=2*(b+d);
                                                            printf("Perimeter: %f", c);
                                                            break;
                                                            }
                                                        }
                                                        break;
                                        }
                                    case 9://Rhombus
                                        {


                                                int a;
                                                     system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                    printf ("Rhombus...\n\n\n");
                                                    printf("1.Area\n");
                                                    printf("2.Perimeter\n");
                                                    scanf ("%d", &a);
                                                    switch(a)
                                                        {
                                                            case 1:
                                                            {
                                                            float b,c,d;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input side\n");
                                                            scanf("%f",&b);
                                                            printf("input height\n");
                                                            scanf("%f",&d);
                                                            c=b*d;
                                                            printf ("Area: %f", c);
                                                            break;
                                                            }
                                                            case 2:
                                                            {
                                                            float b,c,d;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf ("input side one\n");
                                                            scanf("%f",&b);
                                                            c=4*b;
                                                            printf("Perimeter: %f", c);
                                                            break;
                                                            }
                                                        }
                                                        break;
                                        }
                                    case 10://trapezoid
                                        {

                                                 int a;
                                                     system("cls");
                                                printf("\t\t\t***CALCULATOR***\n");
                                                printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                    printf ("Trapezoid...\n\n\n");
                                                    printf("1.Area\n");
                                                    printf("2.Perimeter\n");
                                                    scanf ("%d", &a);
                                                    switch(a)
                                                        {
                                                            case 1:
                                                            {
                                                            float b,c,d,e;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input parallel side one\n");
                                                            scanf("%f",&b);
                                                            printf("input parallel side two\n");
                                                            scanf("%f",&e);
                                                            printf("input height\n");
                                                            scanf("%f",&d);
                                                            c=((b+e)/2)*d;
                                                            printf ("Area: %f", c);
                                                            break;
                                                            }
                                                            case 2:
                                                            {
                                                            float b,c,d,e,f,g;
                                                             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                                                            printf("input parallel side one\n");
                                                            scanf("%f",&b);
                                                            printf("input parallel side two\n");
                                                            scanf("%f",&e);
                                                            printf("input nonparallel side one\n");
                                                            scanf("%f",&f);
                                                            printf("input nonparallel side two\n");
                                                            scanf("%f",&g);
                                                            c=b+e+f+g;
                                                            printf("Perimeter: %f", c);
                                                            break;
                                                            }
                                                        }
                                                        break;                                       }



                    default:
                        {
                            printf("invalid");
                        }
                    }
}
void c()//physics
{
        int a;
        system("cls");
        system("color f2");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
    printf("Physics\n\n\n");
    printf("1.Mechanics\n");
    printf("2.Thermal Physics\n");
    printf("3.Waves & Optics\n");
    printf("4.Electricity & Magnetism\n");
    printf("5.Modern Physics\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1://mechanics
        {
    int a;
    system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
    float b,c,d,e;
    printf("mechanics\n\n\n");
    printf("1.Equation of motion determining velocity\n");
    printf("2.Equation of motion determining distance\n");
    printf ("3.Determination of force\n");
    printf ("4.Equation of torque\n");
    printf ("5.Equation of inertia\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("equation of motion determining velocity\n");
            float u,a,t,v;
            printf("enter primary velocity\n");
            scanf("%f",&u);
            printf("enter acceleration\n");
            scanf("%f",&a);
            printf("enter time\n");
            scanf("%f",&t);
            v=u+(a*t);
            printf("the velocity is %f meter per second\n",v);
            break;


        }
    case 2:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("equation of motion determining distance\n");
            float u,a,t,s;
            printf("enter primary velocity\n");
            scanf("%f",&u);
            printf("enter time\n");
            scanf("%f",&t);
            printf("enter acceleration\n");
            scanf("%f",&a);
            s=(u*t)+(a*t*t/2);
            printf("the velocity is %f meter\n",s);
            break;

        }
    case 3:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("determine the force\n");
        float m,a,f;
        printf ("enter mass\n");
        scanf ("%f",&m);
        printf ("enter acceleration\n");
        scanf ("%f",&a);
        f=m*a;
        printf ("force is %f\n",f);
        break;



        }
        case 4:
         {
             system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("equation of torque \n");
            float r,f,t;
            printf("enter radius\n");
            scanf("%f",&r);
            printf("enter force\n");
            scanf("%f",&f);
            t=r*f;
            printf("value of torque is %f",t);
            break;

        }
        case 5:
            {
                system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("equation of inertia \n");
            float m,r,i;
            printf("enter radius\n");
            scanf("%f",&r);
            printf("enter mass\n");
            scanf("%f",&m);
            i=m*r*r;
            printf("value of torque is %f",i);
            break;
            }

    }
    break;

        }
    case 2://thermal
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a;
    printf("Thermal physics\n\n\n");
    printf("1.Latent law\n");
    printf("2.Ideal gas law\n");
    printf("3.Sensible heat\n");
    printf("4.Entropy\n");
    printf("5.1st law of thermodynamics\n");

    scanf("%d",&a);
    switch (a)
    {
    case 1:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Latent law\n\n\n");


    int m,l,q;
        printf("mass\n");
        scanf("%d",&m);
        printf("specific heat\n");
        scanf("%d",&l);

        q=m*l;
        printf ("latent heat :%d\n",q);
        break;
        }

        case 2:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Ideal gas law\n\n\n");


     float v, n,r=8.314,t,p,x;


        printf ("number of moles\n");
        scanf ("%f",&n);
        printf ("the  value of %f\n",r);

        printf ("specific heat\n");
        scanf ("%f",&t);
       x=n*r*t;

        printf ("the volume is ");
        scanf ("%f",&v);
        p=x/v;
        printf ("the pressure is: %f\n",p);
        break;
        }
        {
           case 3:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Sensible heat\n\n\n");


     float m,c,t,q;


        printf ("mass\n");
        scanf ("%f",&m);


        printf ("specific heat\n");
        scanf ("%f",&c);
       printf ("temperature\n");

        scanf ("%f",&t);
        q=m*c*t;
        printf ("the heat energy: %f\n",q);
        break;

        }
        case 4:

        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Entropy\n\n\n");
            float s,q,t;


        printf ("heat\n");
        scanf ("%f",&q);


        printf ("specific temperature\n");
        scanf ("%f",&t);

        s=q/t;
        printf ("entropy %f\n",s);
        break;


        }
        case 5:

        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("1st law of thermodynamics\n\n\n");
            float q,w,s;


        printf ("external work done\n");
        scanf ("%f",&q);


        printf ("internal increase energy\n");
        scanf ("%f",&w);

        s=q+w;
        printf ("effected energy on a body %f\n",s);
        break;

            }


        }

        }
        break;


        }
    case 3://waves and optics
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            int a;
    printf("Waves and optics\n\n\n");
    printf("1.Periodic waves\n");
    printf("2.Frequency\n");
    printf("3.Index of reflection\n");
    printf("4.Image location\n");
    printf("5.Spherical mirrors\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Periodic waves\n\n\n");
            float v,f,y;
            printf("enter frequency\n");
            scanf("%f",&f);
            printf("enter wave length\n");
            scanf("%f",&y);
            printf("Frequency :%f\n",f*y);
            break;

        }
    case 2:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Index of reflection\n\n\n");
            float v,f,y;
            printf("enter time period\n");
            scanf("%f",&f);
            printf("Velocity :%f\n",1/f);
            break;

        }
    case 3:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Index of reflection\n\n\n");
            float v,c,n;
            printf("enter c\n");
            scanf("%f",&c);
            printf("enter v\n");
            scanf("%f",&v);
            printf("n :%f\n",c/v);
            break;

        }
    case 4:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Image location\n\n\n");
            float f,u,v;
            printf("enter object distance\n");
            scanf("%f",&u);
            printf("enter image distance\n");
            scanf("%f",&v);
            printf("Focus length :%f\n",((1/u)+(1/v)));
            break;

        }
    case 5:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Spherical mirrors\n\n\n");
            float v,f,y;
            printf("enter object distance\n");
            scanf("%f",&f);
            printf("Focus length :%f\n",(f/2));
            break;

        }
    }
break;

        }
    case 4://electricity and magnetism
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            int a;
    printf("Electricity and magnetism\n\n\n");
    printf("1.Coulombs law\n");
    printf("2.Electric field\n");
    printf("3.Capacitance\n");
    printf("4.Electric resistance\n");
    printf("5.Ohm's law\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Coulombs law\n\n\n");
            float f,k=9e9,q1,q2,r;
            printf("enter interacting charge one\n");
            scanf("%f",&q1);
            printf("enter interacting charge two\n");
            scanf("%f",&q2);
            printf("enter distance between charges\n");
            scanf("%f",&r);
            f=(k*(q1*q2))/(r*r);
            printf("Force :%30.20f\n",f);
            break;

        }
    case 2:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Electric field\n\n\n");
            float f,q,e;
            printf("enter the test charge\n");
            scanf("%f",&q);
            printf("enter exerted electrical force\n");
            scanf("%f",&f);
            e=f/q;
            printf("Electric field strength :%30.20f\n",e);
            break;

        }
    case 3:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Capacitance\n\n\n");
            float c,q,v;
            printf("enter the charge\n");
            scanf("%f",&q);
            printf("enter voltage between the plates\n");
            scanf("%f",&v);
            c=q/v;
            printf("Capacitance :%30.20f\n",c);
            break;

        }
    case 4:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Electric resistance\n\n\n");
            float r,p,l,a;
            printf("enter resistivity of the material\n");
            scanf("%f",&p);
            printf("enter length of the wire\n");
            scanf("%f",&l);
            printf("enter Area of cross section\n");
            scanf("%f",&a);
            r=(p*l)/a;
            printf("Electric resistance :%30.20f\n",r);
            break;

        }
    case 5:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Ohm's law\n\n\n");
            float v,i,r;
            printf("enter resistance\n");
            scanf("%f",&r);
            printf("enter current through the conductor\n");
            scanf("%f",&i);
            v=i*r;
            printf("voltage measured across the conductor :%30.20f\n",v);
            break;


        }
    }
    break;

        }
    case 5://modern physics
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a;
    printf("Modern physics\n\n\n");
    printf("1.Mass energy\n");
    printf("2.Energy momentum\n");
    printf("3.length contraction\n");

    scanf("%d",&a);
    switch (a)
    {
    case 1:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf ("mass energy\n\n\n");
            float e,m,c;
            c=3e8;



        printf("mass\n");
        scanf("%f",&m);
        printf("light's velocity %f\n",c);

        e=m*c*c;
        printf ("mass energy %f\n",e);
        break;
        }

        case 2:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf ("energy momentum\n\n\n");


     float e,m,c,p;
      c=3e8;


        printf ("photon momentum\n");
        scanf ("%f",&p);


        printf ("mass\n");
        scanf ("%f",&m);


       e=((p*p*c*c)+(m*m*c*c*c*c));
        printf ("energy momentum %f\n",e);

        break;
        }

           case 3:
        {
            system("cls");
                                                            printf("\t\t\t***CALCULATOR***\n");
                                                            printf("\t\t\t >>fatakeshto<<\n\n\n");

         printf ("length contraction\n\n\n");
     float l1,l2,v,c;
     c=3e10;


        printf ("length\n");
        scanf ("%f",&l2);


        printf ("velocity\n");
        scanf ("%f",&v);



        l1=l2; sqrt(1-(v*v/c*c));
        printf ("length contraction: %f\n",l1);
        break;

        }

    }
    break;

        }
    }

}
void d()//conversion
{
    system("cls");
    system("color f2");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
    printf("conversion...........\n\n\n");
    printf("enter your choice\n\n");
    printf("1 .Decimal to others\n");
    printf("2 .binary to others\n");
    printf("3 .octal to others\n");
    printf("4 .hexadecimal to others\n");
    printf("5 .Area conversion\n");
    printf("6 .Mass conversion\n");
    printf("7 .Data transfer rate conversion\n");
    printf("8 .Pressure conversion\n");
    printf("9 .speed conversion\n");
    printf("10.Time conversion\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Decimal to B,O,HX.\n\n");
            printf("enter the decimal number\n");
            int a;
            scanf("%d",&a);
            printf("Octal : %o\n",a);
            printf("Hexadecimal : %x\n",a);
            int b,c[20],d;//conversion to binary
            for(b=0; a!=0; b++)
            {
                c[b]=a%2;
                a=a/2;
            }
            printf("binary : ");
            for(d=b-1; d>=0; d--)
            {
                printf("%d",c[d]);
            }

            break;
        }
    case 2:
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Binary to D,O,HX.\n\n");
            printf("enter the binary number\n");
            int a;
            scanf("%d",&a);
            int b,c,d=0;
            for(b=0; a>0; b++)
            {
                c=a%10;
                d=d+c*pow(2,b);
                a=a/10;
            }
            printf("Decimal     :%d\n",d);
            printf("Octal       :%o\n",d);
            printf("Hexadecimal :%x\n",d);
            break;
        }
    case 3:
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
            printf("Octal to B,D,HX.\n\n");
            printf("enter the octal number TWO TIMES.\n");
            int z,a;
            scanf("%o",&z);
            scanf("%d",&a);
            printf("Decimal    :%d\n",z);
            printf("Hexadecimal:%x\n",z);
            printf("Binary     :");
            int b,c[30],d,e;
            for(b=0;a!=0;b++)
            {
                c[b]=a%10;
                a=a/10;
            }

            for(b=b-1; b>=0; b--)
            {
                switch(c[b])
            {
                case 0:
                printf("000");
                break;
                case 1:
                printf("001");
                break;
                case 2:
                printf("010");
                break;
                case 3:
                printf("011");
                break;
                case 4:
                printf("100");
                break;
                case 5:
                printf("101");
                break;
                case 6:
                printf("110");
                break;
                case 7:
                printf("111");
                break;
            }
            }
            printf("\n");
            break;

        }
        case 4:
            {
                system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");

            printf("Hexadecimal to B,D,O.\n\n");
            printf("enter the hexadecimal number TWO TIMES.\n");
            int z;
            char a[30];
            scanf("%x",&z);
            scanf("%s",a);
            printf("Decimal    :%d\n",z);
            printf("octal      :%o\n",z);
            printf("Binary     :");
            int b,c,d,e,f;

            for(b=0;a[b]!=0;b++)
            {
                switch(a[b])
            {
                case '0':
                printf("0000");
                break;
                case '1':
                printf("0001");
                break;
                    case '2':
                printf("0010");
                break;
                    case '3':
                printf("0011");
                break;
                    case '4':
                printf("0100");
                break;
                    case '5':
                printf("0101");
                break;
                    case '6':
                printf("0110");
                break;
                    case '7':
                printf("0111");
                break;
                    case '8':
                printf("1000");
                break;
                    case '9':
                printf("1001");
                break;
                    case 'a':
                    case 'A':
                printf("1010");
                break;
                    case 'b':
                    case'B':
                printf("1011");
                break;
                    case 'c':
                        case'C':
                printf("1100");
                break;
                                case 'd':
                        case'D':
                printf("1101");
                break;
                                case 'e':
                        case'E':
                printf("1110");
                break;
                                case 'f':
                        case'F':
                printf("1111");
                break;
            }
            }
            break;
            }
                        case 5:
                            {
                                system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                printf("Area conversion..\n");
                                int q;
                                printf("1.Square metre to square kilometre\n");
                                printf("2.Square foot to square mile\n");
                                printf("3.Acre to square hectare\n");
                                scanf("%d",&q);
                                switch(q)
                                {
                                case 1:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Square metre to square kilometre\n");
                                        printf("Input square metre\n");
                                        float a,b=1e6,c;
                                        scanf("%f",&a);
                                        printf("Square kilometre : %30.20f",a/b);
                                        break;
                                    }
                                case 2:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Square foot to square mile\n");
                                        printf("Input square foot\n");
                                        float a,b=3.587e-8,c;
                                        scanf("%f",&a);
                                        printf("Square mile : %30.20f",a*b);
                                        break;
                                    }
                                case 3:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Acre to hectare\n");
                                        printf("Input Acre\n");
                                        float a,b=.404686,c;
                                        scanf("%f",&a);
                                        printf("Hectare : %30.20f",a*b);
                                        break;
                                    }

                                    }
                                    break;
                                    }
                                case 6:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Mass conversion..\n");
                                int q;
                                printf("1.Kilogram to gram\n");
                                printf("2.Tonne foot to kilogram\n");
                                printf("3.Pound to ounce\n");
                                scanf("%d",&q);
                                switch(q)
                                {
                                case 1:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Kilogram to gram\n");
                                        printf("Input KG\n");
                                        float a,b=1000,c;
                                        scanf("%f",&a);
                                        printf("Gram : %f",a*b);
                                        break;
                                    }
                                case 2:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Tonne to kilogram\n");
                                        printf("Input tonne\n");
                                        float a,b=1000,c;
                                        scanf("%f",&a);
                                        printf("Kilogram : %f",a*b);
                                        break;
                                    }
                                case 3:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Pound to ounce\n");
                                        printf("Input pound\n");
                                        float a,b=16,c;
                                        scanf("%f",&a);
                                        printf("Ounce : %f",a*b);
                                        break;
                                    }
                                }
                                break;


                                    }
                                case 7:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                printf("Data transfer rate..\n");
                                int q;
                                printf("1.Kilobit per sec to bit per sec\n");
                                printf("2.Terabyte per sec to gigabit per sec\n");
                                printf("3.Megabit per sec to terabyte per sec\n");
                                scanf("%d",&q);
                                switch(q)
                                {
                                case 1:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Kilobit per sec to bit per sec\n");
                                        printf("Input Kilobit per sec\n");
                                        float a,b=1000,c;
                                        scanf("%f",&a);
                                        printf("Bit per sec : %f",a*b);
                                        break;
                                    }
                                case 2:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Terabyte per sec to gigabit per sec\n");
                                        printf("Input Terabyte per sec\n");
                                        float a,b=8000,c;
                                        scanf("%f",&a);
                                        printf("Gigabit per sec : %f",a*b);
                                        break;
                                    }
                                case 3:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Megabit per sec to terabyte per sec\n");
                                        printf("Input Megabit per sec\n");
                                        float a,b=1.3107e-7,c;
                                        scanf("%f",&a);
                                        printf("Terabyte per sec : %20.20f",a*b);
                                        break;
                                    }
                                }
                                break;

                                    }
                                case 8:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                printf("Pressure conversion..\n");
                                int q;
                                printf("1.kilobit per second to bit per sec\n");
                                printf("2.Terabyte per sec to gigabit per sec\n");
                                printf("3.Megabit per sec to terabyte per sec\n");
                                scanf("%d",&q);
                                switch(q)
                                {
                                case 1:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Kilobit per sec to bit per sec\n");
                                        printf("Input Kilobit per sec\n");
                                        float a,b=1000,c;
                                        scanf("%f",&a);
                                        printf("Bit per sec : %f",a*b);
                                        break;
                                    }
                                case 2:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Terabyte per sec to gigabit per sec\n");
                                        printf("Input Terabyte per sec\n");
                                        float a,b=8000,c;
                                        scanf("%f",&a);
                                        printf("Gigabit per sec : %f",a*b);
                                        break;
                                    }
                                case 3:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Megabit per sec to terabyte per sec\n");
                                        printf("Input Megabit per sec\n");
                                        float a,b=1.3107e-7,c;
                                        scanf("%f",&a);
                                        printf("Terabyte per sec : %20.20f",a*b);
                                        break;
                                    }
                                }
                                break;



                                    }
                                case 9://speed
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                printf("speed conversion..\n");
                                int q;
                                printf("1.Knot to kilometer per hour\n");
                                printf("2.Kilometer per hour to meter per sec\n");
                                printf("3.Foot per second to mile per hour\n");
                                scanf("%d",&q);
                                switch(q)
                                {
                                case 1:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Knot to kilometer per hour\n");
                                        printf("Input knot\n");
                                        float a,b=1.852,c;
                                        scanf("%f",&a);
                                        printf("Kilometer per sec : %f",a*b);
                                        break;
                                    }
                                case 2:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Kilometer per hour to meter per sec\n");
                                        printf("Input kilometer per hour\n");
                                        float a,b=.277778,c;
                                        scanf("%f",&a);
                                        printf("meter per sec : %f",a*b);
                                        break;
                                    }
                                case 3:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("Foot per second to mile per hour\n");
                                        printf("Input foot per sec\n");
                                        float a,b=.681818,c;
                                        scanf("%f",&a);
                                        printf("Mile per hour : %20.20f",a*b);
                                        break;
                                    }
                                }
                                break;

                                    }
                                case 10:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                printf("Time conversion..\n");
                                int q;
                                printf("1.month to hour\n");
                                printf("2.weak to hour\n");
                                printf("3.century to decade\n");
                                scanf("%d",&q);
                                switch(q)
                                {
                                case 1:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("month to hour\n");
                                        printf("Input month\n");
                                        float a,b=730.001,c;
                                        scanf("%f",&a);
                                        printf("hour : %f",a*b);
                                        break;
                                    }
                                case 2:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("weak to hour\n");
                                        printf("Input week\n");
                                        float a,b=168,c;
                                        scanf("%f",&a);
                                        printf("hour: %f",a*b);
                                        break;
                                    }
                                case 3:
                                    {
                                        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                                        printf("century to decade\n");
                                        printf("century\n");
                                        float a,b=10,c;
                                        scanf("%f",&a);
                                        printf("decade: %f",a*b);
                                        break;
                                    }
                                }
                                break;

                                    }
                                }
}
void e()
{
    system("cls");
    system("color f9");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
    printf("***MATRIX***\n\n\n");
    printf("1.Inverse matrix\n");
    printf("2.Transpose of matrix\n");
    printf("3.Addition\n");
    printf("4.Subtraction\n");
    printf("5.Multiplication\n");
    printf("6.Determinant\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1://inverse
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a[3][3],c,d;
                printf("Inverse\n\n\n");
    float r1,r2,r3,r4,r5,r6,z,p1,p2,p3,p4,p5,p6,p7,p8,p9,y,s1,s4,s7,s2,s5,s8,s3,s6,s9;
    printf("Enter your matrix\n");
    for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    r1=a[0][0]*a[1][1]*a[2][2];//determining |a|
    r2=a[0][1]*a[1][2]*a[2][0];
    r3=a[0][2]*a[1][0]*a[2][1];
    r4=a[0][2]*a[1][1]*a[2][0];
    r5=a[0][0]*a[1][2]*a[2][1];
    r6=a[0][1]*a[1][0]*a[2][2];
    z=(r1+r2+r3)-(r4+r5+r6);

    p1=(a[1][1]*a[2][2])-(a[2][1]*a[1][2]);//determining n
    p2=-((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
    p3=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
    p4=-((a[0][1]*a[2][2])-(a[0][2]*a[2][1]));
    p5=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
    p6=-((a[0][0]*a[2][1])-(a[0][1]*a[2][0]));
    p7=(a[0][1]*a[1][2])-(a[1][1]*a[0][2]);
    p8=-((a[0][0]*a[1][2])-(a[0][2]*a[1][0]));
    p9=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);

    y=1/z;
    s1=y*p1;
    s2=y*p2;
    s3=y*p3;
    s4=y*p4;
    s5=y*p5;
    s6=y*p6;
    s7=y*p7;
    s8=y*p8;
    s9=y*p9;
    printf("inverse : \n%f %f %f \n%f %f %f\n%f %f %f\n",s1,s4,s7,s2,s5,s8,s3,s6,s9);
    break;
        }
    case 2://transpose
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a[3][3],c,d;
                printf("Transpose\n\n\n");
                printf("enter the matrix\n");
    for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    printf("Transpose : \n");
        for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            printf("%d ",a[d][c]);
        }
        printf("\n");
    }
    break;
        }
    case 3://addition
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a[3][3],b[3][3],c,d;
                printf("Addition\n\n\n");
                printf("enter first matrix\n");

    for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    printf("enter matrix two\n");
        for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&b[c][d]);
        }
    }
    printf("Addition : \n");

        for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            printf("%d ",a[c][d]+b[c][d]);

        }
        printf("\n");
    }
    break;
        }
    case 4://subtraction
    {
        system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
            int a[3][3],b[3][3],c,d;
            printf("Subtraction\n\n\n");
            printf("enter matrix one\n");
    for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    printf("enter matrix two\n");
        for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&b[c][d]);
        }
    }
    printf("Subtraction : \n");

        for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            printf("%d ",a[c][d]-b[c][d]);

        }
        printf("\n");
    }
    break;
    }
    case 5://multiplication
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a[3][3],b[3][3],c,d,r1,r2,r3,r4,r5,r6,r7,r8,r9;
                printf("Multiplication\n\n\n");
                printf("enter matrix one\n");
    for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    printf("enter matrix two\n");
        for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&b[c][d]);
        }
    }
   r1=(a[0][0]*b[0][0])+(a[0][1]*b[1][0])+(a[0][2]*b[2][0]);
   r2=(a[0][0]*b[0][1])+(a[0][1]*b[1][1])+(a[0][2]*b[2][1]);
   r3=(a[0][0]*b[0][2])+(a[0][1]*b[1][2])+(a[0][2]*b[2][2]);

   r4=(a[1][0]*b[0][0])+(a[1][1]*b[1][0])+(a[1][2]*b[2][0]);
   r5=(a[1][0]*b[0][1])+(a[1][1]*b[1][1])+(a[1][2]*b[2][1]);
   r6=(a[1][0]*b[0][2])+(a[1][1]*b[1][2])+(a[1][2]*b[2][2]);

    r7=(a[2][0]*b[0][0])+(a[2][1]*b[1][0])+(a[2][2]*b[2][0]);
   r8=(a[2][0]*b[0][1])+(a[2][1]*b[1][1])+(a[2][2]*b[2][1]);
   r9=(a[2][0]*b[0][2])+(a[2][1]*b[1][2])+(a[2][2]*b[2][2]);

      printf("Multiplication : \n");
      printf("%d %d %d\n",r1,r2,r3);
      printf("%d %d %d\n",r4,r5,r6);
   printf("%d %d %d\n",r7,r8,r9);
   break;
        }
    case 6://determinant
        {
            system("cls");
    printf("\t\t\t***CALCULATOR***\n");
    printf("\t\t\t >>fatakeshto<<\n\n\n");
                int a[3][3],c,d;
                printf("Determinant\n\n\n");
                printf("enter matrix one\n");
    float r1,r2,r3,r4,r5,r6,z,p1,p2,p3,p4,p5,p6,p7,p8,p9,y,s1,s4,s7,s2,s5,s8,s3,s6,s9;
    for(c=0; c<3 ;c++)
    {
        for(d=0; d<3; d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    r1=a[0][0]*a[1][1]*a[2][2];//determining |a|
    r2=a[0][1]*a[1][2]*a[2][0];
    r3=a[0][2]*a[1][0]*a[2][1];
    r4=a[0][2]*a[1][1]*a[2][0];
    r5=a[0][0]*a[1][2]*a[2][1];
    r6=a[0][1]*a[1][0]*a[2][2];
    z=(r1+r2+r3)-(r4+r5+r6);
    printf("Determinant : %f",z);
    break;
        }
    }
}

//user defined functions prototypes




int subs(int a, int b)//subtraction
{
    int subs;
    subs=a-b;
    return subs;
}
int add(int a, int b)//addition
{
    int add;
    add=a+b;
    return add;
}
int multi(int a, int b)//multiplication
{
    int multi;
    multi=a*b;
    return multi;
}
int div(int a, int b)//division
{
    int div;
    div=a/b;
    return div;
}
float area(float a)
{
    float area,pi=3.1416;
    area=pi*(a*a);
    return area;
}
float primtr(float b)
{
    float primtr,pie=3.1416;
    primtr=2*b*pie;
    return primtr;
}
float arearc(float a,float b)
{
    float arearc;
    arearc=a*b;
    return arearc;
}
float primtrrc(float a,float b)
{
    float primtrrc;
    primtrrc=(2*b)+(2*a);
    return primtrrc;
}
float ntlarea(float a,float b)
{
    float ntlarea;
    ntlarea=(a*b)/2;
    return ntlarea;
}
float ntlprimtr(float a,float b,float c)
{
    float ntlprimtr;
    ntlprimtr=a+b+c;
    return ntlprimtr;
}
float starea(float a,float b, float c)
{
    float starea,s;
    s=(a+b+c)/2;
    starea=sqrt(s*(s-a)*(s-b)*(s-c));
    return starea;
}
float etarea(float a)
{
    float etarea;
    etarea=((sqrt(3))/4)*pow(a,2);
    return etarea;
}
float etprimtr(float a)
{
    float etprimtr;
    etprimtr=a+a+a;
    return etprimtr;
}
float itprimtr(float a,float b)
{
    float itprimtr;
    itprimtr=(2*a)+b;
    return itprimtr;
}


