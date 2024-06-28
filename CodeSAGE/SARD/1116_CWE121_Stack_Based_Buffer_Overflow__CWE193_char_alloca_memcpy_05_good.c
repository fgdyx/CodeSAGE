#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2((10)*sizeof(char));
 char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 memcpy(VAR2, VAR6, (strlen(VAR6) + 1) * sizeof(char));
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2((10)*sizeof(char));
 char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
 if(VAR8)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 memcpy(VAR2, VAR6, (strlen(VAR6) + 1) * sizeof(char));
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
