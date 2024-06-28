#ifndef VAR1
void FUN1(size_t VAR2[])
{
 size_t VAR3 = VAR2[2];
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN3(size_t VAR2[])
{
 size_t VAR3 = VAR2[2];
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5) && VAR3 < 100)
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
