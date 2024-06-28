#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR4, VAR2);
}
#endif
