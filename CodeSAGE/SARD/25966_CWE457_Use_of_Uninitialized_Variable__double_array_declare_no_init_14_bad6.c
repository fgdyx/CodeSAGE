#ifndef VAR1
void FUN1()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR2[VAR5]);
 }
 }
 }
}
#endif
