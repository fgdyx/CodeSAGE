#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 int VAR4[10];
 VAR3 = VAR4;
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5] = VAR5;
 }
 }
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 int * VAR3;
 int VAR4[10];
 VAR3 = VAR4;
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5] = VAR5;
 }
 }
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
