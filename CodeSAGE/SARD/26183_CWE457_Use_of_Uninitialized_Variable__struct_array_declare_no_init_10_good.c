#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 if(VAR5)
 {
 ;
 }
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 VAR3[VAR7].VAR8 = VAR7;
 VAR3[VAR7].VAR9 = VAR7;
 }
 }
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 FUN3(VAR3[VAR7].VAR8);
 FUN3(VAR3[VAR7].VAR9);
 }
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 if(VAR5)
 {
 ;
 }
 if(VAR5)
 {
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 VAR3[VAR7].VAR8 = VAR7;
 VAR3[VAR7].VAR9 = VAR7;
 }
 }
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 FUN3(VAR3[VAR7].VAR8);
 FUN3(VAR3[VAR7].VAR9);
 }
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 VAR3[VAR7].VAR8 = VAR7;
 VAR3[VAR7].VAR9 = VAR7;
 }
 }
 }
 if(VAR5)
 {
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 FUN3(VAR3[VAR7].VAR8);
 FUN3(VAR3[VAR7].VAR9);
 }
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 if(VAR5)
 {
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 VAR3[VAR7].VAR8 = VAR7;
 VAR3[VAR7].VAR9 = VAR7;
 }
 }
 }
 if(VAR5)
 {
 {
 int VAR7;
 for(VAR7=0; VAR7<10; VAR7++)
 {
 FUN3(VAR3[VAR7].VAR8);
 FUN3(VAR3[VAR7].VAR9);
 }
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
