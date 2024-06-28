int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 10;
 VAR2 = 0;
 do
 {
 /* BAD */
 VAR3[10] = '';
 }
 while((++VAR2) && (VAR2 <= VAR1));
 return 0;
}
