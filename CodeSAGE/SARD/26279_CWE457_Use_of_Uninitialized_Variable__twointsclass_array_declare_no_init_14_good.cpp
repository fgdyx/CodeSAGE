#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(VAR5==5)
 {
 ;
 }
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 FUN3(VAR3[VAR6].VAR7);
 FUN3(VAR3[VAR6].VAR8);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(VAR5==5)
 {
 ;
 }
 if(VAR5==5)
 {
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 FUN3(VAR3[VAR6].VAR7);
 FUN3(VAR3[VAR6].VAR8);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 if(VAR5==5)
 {
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 FUN3(VAR3[VAR6].VAR7);
 FUN3(VAR3[VAR6].VAR8);
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(VAR5==5)
 {
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 if(VAR5==5)
 {
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 FUN3(VAR3[VAR6].VAR7);
 FUN3(VAR3[VAR6].VAR8);
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
