#ifndef VAR1
extern int VAR2;
void FUN1(float VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR4 = (int)(100.0 / VAR3);
 FUN2(VAR4);
 }
 }
}
#endif
