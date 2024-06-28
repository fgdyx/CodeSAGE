#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR4 = new VAR3[10];
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR4[VAR5].VAR6 = VAR5;
 VAR4[VAR5].VAR7 = VAR5;
 }
 FUN1(&VAR4);
}
void FUN3(void * VAR2);
static void FUN4()
{
 VAR3 * VAR4;
 VAR4 = new VAR3[10];
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR4[VAR5].VAR6 = VAR5;
 VAR4[VAR5].VAR7 = VAR5;
 }
 FUN3(&VAR4);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
