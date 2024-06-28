#ifndef VAR1
extern int VAR2;
void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR4, VAR3);
 }
}
#endif
