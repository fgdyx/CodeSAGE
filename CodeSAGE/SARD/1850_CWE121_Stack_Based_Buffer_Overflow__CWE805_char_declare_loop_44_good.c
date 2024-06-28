#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = VAR4[VAR3];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR5) (char *) = VAR6;
 char VAR7[50];
 char VAR8[100];
 VAR2 = VAR8;
 VAR2[0] = '';
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
