#ifndef VAR1
void FUN1()
{
 size_t VAR2 = VAR3;
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5))
 {
 VAR4 = new char[VAR2];
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
void FUN3()
{
 size_t VAR2 = VAR6;
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5) && VAR2 < 100)
 {
 VAR4 = new char[VAR2];
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
