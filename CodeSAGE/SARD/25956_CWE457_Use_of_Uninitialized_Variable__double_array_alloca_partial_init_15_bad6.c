#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 break;
 default:
 FUN3("");
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
 FUN4(VAR2[VAR3]);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
