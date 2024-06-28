#ifndef VAR1
void FUN1()
{
 float VAR2;
 float *VAR3 = &VAR2;
 float *VAR4 = &VAR2;
 VAR2 = 0.0F;
 {
 float VAR2 = *VAR3;
 /* POTENTIAL FLAW: Set data to zero */
 VAR2 = 0.0F;
 *VAR3 = VAR2;
 }
 {
 float VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR5 = (int)(100.0 / VAR2);
 FUN2(VAR5);
 }
 }
}
#endif
