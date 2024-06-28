#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 while(1)
 {
 strcat(VAR2, VAR4);
 break;
 }
 FUN2(VAR2);
}
void FUN3()
{
 FUN1();
}
#endif
