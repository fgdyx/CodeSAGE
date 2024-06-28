#ifndef VAR1
extern int VAR2;
void FUN1(int VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 / VAR3);
 }
}
#endif
