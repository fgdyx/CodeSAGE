#ifndef VAR1
void FUN1(char * &VAR2)
{
 VAR2 = new char[100];
}
void FUN2(char * &VAR2)
{
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 }
}
#endif
