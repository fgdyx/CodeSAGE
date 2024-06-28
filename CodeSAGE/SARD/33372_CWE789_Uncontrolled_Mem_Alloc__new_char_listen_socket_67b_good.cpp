#ifndef VAR1
void FUN1(structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 char * VAR5;
 if (VAR3 > strlen(VAR6))
 {
 VAR5 = new char[VAR3];
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN3(structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 char * VAR5;
 if (VAR3 > strlen(VAR6) && VAR3 < 100)
 {
 VAR5 = new char[VAR3];
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
