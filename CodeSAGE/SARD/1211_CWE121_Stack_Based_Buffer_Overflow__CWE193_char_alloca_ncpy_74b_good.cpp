#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[10+1] = VAR6;
 strncpy(VAR4, VAR5, strlen(VAR5) + 1);
 FUN2(VAR4);
 }
}
#endif
