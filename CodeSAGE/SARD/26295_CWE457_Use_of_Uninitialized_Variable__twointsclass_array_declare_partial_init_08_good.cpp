#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(FUN2())
 {
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(FUN3())
 {
 FUN4("");
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
 FUN5(VAR3[VAR5].VAR6);
 FUN5(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(FUN2())
 {
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(FUN2())
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN5(VAR3[VAR5].VAR6);
 FUN5(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(FUN2())
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN5(VAR3[VAR5].VAR6);
 FUN5(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN8()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(FUN2())
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(FUN2())
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN5(VAR3[VAR5].VAR6);
 FUN5(VAR3[VAR5].VAR7);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
