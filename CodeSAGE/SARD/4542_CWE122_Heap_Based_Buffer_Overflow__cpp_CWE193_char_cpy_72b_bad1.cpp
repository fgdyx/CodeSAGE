#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[10+1] = VAR6;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
}
#endif
