#ifndef VAR1
extern int VAR2;
void FUN1(char * VAR3)
{
 if(VAR2)
 {
 {
 char VAR4[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR4, 100-1, VAR3);
 FUN3(VAR4);
 }
 }
}
#endif
