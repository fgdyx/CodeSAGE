#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 strncpy(VAR2, VAR4, strlen(VAR4) + 1);
 FUN2(VAR2);
 }
}
#endif
