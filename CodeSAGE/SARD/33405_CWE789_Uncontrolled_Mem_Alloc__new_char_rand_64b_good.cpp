#ifndef VAR1
void FUN1(void * VAR2)
{
 VAR3 * VAR4 = (VAR3 *)VAR2;
 size_t VAR5 = (*VAR4);
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7))
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN3(void * VAR2)
{
 VAR3 * VAR4 = (VAR3 *)VAR2;
 size_t VAR5 = (*VAR4);
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
