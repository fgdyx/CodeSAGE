#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 strcat(VAR4, VAR2);
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
