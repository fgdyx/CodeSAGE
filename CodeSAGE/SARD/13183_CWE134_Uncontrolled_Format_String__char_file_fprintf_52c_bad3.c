#ifndef VAR1
void FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR3, VAR2);
}
#endif
