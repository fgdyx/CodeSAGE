#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2((10)*sizeof(char));
 char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
 while(1)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
 }
 {
 char VAR5[10+1] = VAR6;
 memmove(VAR2, VAR5, (strlen(VAR5) + 1) * sizeof(char));
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
