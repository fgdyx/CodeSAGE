#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 if(VAR4==5)
 {
 ;
 }
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = (double)VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
static void FUN4()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 if(VAR4==5)
 {
 ;
 }
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = (double)VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
static void FUN5()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = (double)VAR5;
 }
 }
 }
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
static void FUN6()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = (double)VAR5;
 }
 }
 }
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
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
