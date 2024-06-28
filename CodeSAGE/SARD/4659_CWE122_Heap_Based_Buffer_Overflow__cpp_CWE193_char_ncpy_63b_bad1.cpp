#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strncpy(VAR3, VAR4, strlen(VAR4) + 1);
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
