#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Partially initialize data */
 for(int VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
}
#endif
