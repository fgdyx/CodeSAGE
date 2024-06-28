#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Don't initialize data */
 ;
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
