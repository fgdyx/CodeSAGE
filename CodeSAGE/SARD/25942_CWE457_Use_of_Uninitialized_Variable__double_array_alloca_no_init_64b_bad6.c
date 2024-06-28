#ifndef VAR1
void FUN1(void * VAR2)
{
 double * * VAR3 = (double * *)VAR2;
 double * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR4[VAR5]);
 }
 }
}
#endif
