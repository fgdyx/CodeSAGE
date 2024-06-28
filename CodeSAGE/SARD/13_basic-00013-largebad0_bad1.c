int main(int argc, char *argv[])
{
 int VAR12;
 char * VAR13;
 VAR12 = FUN1();
 assert(VAR12 != -1);
 VAR13 = ((char *) FUN5(VAR12, NULL, 0));
 assert(((int)VAR13) != -1);
 /* BAD */
 VAR13[4105] = '';
 FUN6((void *)VAR13);
 FUN3(VAR12);
 return 0;
}
