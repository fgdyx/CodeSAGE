#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 long * VAR4 = new long[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 }
 FUN3(VAR2[0]);
 delete [] VAR2;
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 {
 long * VAR4 = new long[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 }
 FUN3(VAR2[0]);
 delete [] VAR2;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
