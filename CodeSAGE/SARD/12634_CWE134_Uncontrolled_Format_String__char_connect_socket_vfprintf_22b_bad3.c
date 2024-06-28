#ifndef VAR1
extern int VAR2;
void FUN1(char * VAR3, ...)
{
 if(VAR2)
 {
 {
 va_list VAR4;
 FUN2(VAR4, VAR3);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR5, VAR3, VAR4);
 FUN4(VAR4);
 }
 }
}
#endif
