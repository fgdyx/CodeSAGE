#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR3);
 for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR7 = (char *)FUN4((10)*sizeof(char));
 char * VAR8 = (char *)FUN4((10+1)*sizeof(char));
 VAR2 = VAR8;
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
