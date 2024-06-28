#ifndef VAR1
extern int VAR2;
void FUN1(int VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR3);
 FUN3("");
 }
}
#endif
