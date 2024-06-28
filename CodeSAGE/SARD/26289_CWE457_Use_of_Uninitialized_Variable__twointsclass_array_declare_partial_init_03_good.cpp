#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(5==5)
 {
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(5==5)
 {
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(5==5)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(5==5)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(5==5)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(5==5)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
