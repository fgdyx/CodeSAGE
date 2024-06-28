#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR5, VAR4);
}
#endif
