#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new char[50];
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
#endif
