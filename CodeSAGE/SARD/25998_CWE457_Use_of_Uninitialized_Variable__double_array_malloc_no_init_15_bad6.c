#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
