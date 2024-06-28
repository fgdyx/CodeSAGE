#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 size_t VAR3, VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = strlen(VAR5);
 for (VAR3 = 0; VAR3 < VAR4; VAR3++)
 {
 VAR5[VAR3] = VAR2[VAR3];
 }
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR6) (char *) = VAR7;
 char * VAR8 = (char *)FUN4(50*sizeof(char));
 char * VAR9 = (char *)FUN4(100*sizeof(char));
 memset(VAR8, '', 50-1);
 VAR8[50-1] = '';
 memset(VAR9, '', 100-1);
 VAR9[100-1] = '';
 VAR2 = VAR9;
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
