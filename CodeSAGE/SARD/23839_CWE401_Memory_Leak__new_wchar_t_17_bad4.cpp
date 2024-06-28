#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = new wchar_t;
 *VAR4 = VAR5'';
 FUN2((char)*VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
