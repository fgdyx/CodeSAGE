#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = strlen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(VAR5==5)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = strlen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
