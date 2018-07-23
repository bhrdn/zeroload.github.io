// ololo.ololo.ololo.MainActivity.java

/*
 * Decompiled with CFR 0_132.
 * 
 * Could not load the following classes:
 *  android.app.Activity
 *  android.content.pm.ApplicationInfo
 *  android.content.pm.PackageInfo
 *  android.content.pm.PackageManager
 *  android.content.res.Resources
 *  android.os.Bundle
 *  android.view.View
 *  android.widget.Button
 *  android.widget.TextView
 */
package ololo.ololo.ololo;

import android.app.Activity;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.Serializable;
import java.util.Arrays;
import java.util.Random;

public class MainActivity
extends Activity {
    int a = 50;
    int b = 1;
    int c = 0;
    boolean d = false;
    int e = 0;

    public static int byteArrayToInt(byte[] arrby) {
        if (arrby.length == 4) {
            byte by = arrby[3];
            byte by2 = arrby[2];
            byte by3 = arrby[1];
            return arrby[0] & 255 | (by << 24 | (by2 & 255) << 16 | (by3 & 255) << 8);
        }
        return 0;
    }

    public static boolean saveSo(byte[] arrby, String string2) {
        return false;
    }

    public void Check_Click(View view) {
        int n;
        int n2 = this.c % 6;
        int n3 = n = 2130903040;
        switch (n2) {
            default: {
                n3 = n;
                break;
            }
            case 5: {
                n3 = 2130903045;
                break;
            }
            case 4: {
                n3 = 2130903044;
                break;
            }
            case 3: {
                n3 = 2130903043;
                break;
            }
            case 2: {
                n3 = 2130903042;
                break;
            }
            case 1: {
                n3 = 2130903041;
            }
            case 0: 
        }
        if (this.c == this.e) {
            ((Button)this.findViewById(2130771975)).setVisibility(0);
        } else {
            ((Button)this.findViewById(2130771975)).setVisibility(4);
        }
        TextView textView = (TextView)this.findViewById(2130771974);
        view = (TextView)this.findViewById(2130771971);
        TextView textView2 = (TextView)this.findViewById(2130771970);
        TextView textView3 = (TextView)this.findViewById(2130771973);
        TextView textView4 = (TextView)this.findViewById(2130771972);
        String[] arrstring = (String[])this.findViewById(2130771969);
        arrstring.setImageResource(n3);
        try {
            InputStream inputStream = this.getResources().openRawResource(n3);
            byte[] arrby = new byte[inputStream.available()];
            inputStream.read(arrby);
            n3 = arrby.length;
        }
        catch (Exception exception) {
            n3 = -1;
        }
        arrstring.setVisibility(0);
        textView.setText((CharSequence)"Clicable ;D");
        textView4.setText((CharSequence)Integer.toString(n3, 10));
        arrstring = (String[])this.getArrayStrings(n2);
        view.setText((CharSequence)arrstring[1]);
        textView2.setText((CharSequence)arrstring[2]);
        textView3.setText((CharSequence)arrstring[3]);
        ++this.c;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    protected int LoadGoodSo() {
        Object object;
        Object object2;
        byte[] arrby;
        int n;
        int n2;
        block10 : {
            block9 : {
                try {
                    object2 = this.getResources().openRawResource(2130903040);
                    arrby = new byte[object2.available()];
                    object2.read(arrby);
                    n = arrby.length;
                    if (n != -1) break block9;
                    return 1;
                }
                catch (Exception exception) {
                    return 0;
                }
            }
            n2 = n - 4;
            n = MainActivity.byteArrayToInt(Arrays.copyOfRange(arrby, n2, n));
            object = this.getPackageManager();
            object2 = this.getPackageName();
            try {
                object2 = object = object.getPackageInfo((String)object2, (int)0).applicationInfo.dataDir;
            }
            catch (Exception exception) {
                // empty catch block
            }
            super();
            object.append((String)object2);
            object.append("/files");
            object = object.toString();
            Serializable serializable = new Serializable();
            serializable.append((String)object2);
            serializable.append("/files/lib");
            serializable.append("native-lib-x86");
            serializable.append(".so");
            object2 = serializable.toString();
            super((String)object);
            if (serializable.exists()) break block10;
            serializable.mkdir();
        }
        try {
            object = new Object((String)object2);
            object.write(Arrays.copyOfRange(arrby, n, n2));
            object.close();
            return 0;
        }
        catch (Exception exception) {
            return 1;
        }
    }

    public void Stop_Click(View view) {
        ((Button)this.findViewById(2130771975)).setVisibility(4);
        String[] arrstring = (String[])this.checkSomethings(this.c % 6);
        TextView textView = (TextView)this.findViewById(2130771971);
        TextView textView2 = (TextView)this.findViewById(2130771970);
        TextView textView3 = (TextView)this.findViewById(2130771973);
        view = (TextView)this.findViewById(2130771972);
        textView.setText((CharSequence)arrstring[0]);
        textView2.setText((CharSequence)arrstring[1]);
        textView3.setText((CharSequence)arrstring[2]);
        view.setText((CharSequence)arrstring[3]);
    }

    public native Object[] checkSomethings(int var1);

    public native Object[] getArrayStrings(int var1);

    public MainActivity getMainActivity() {
        return this;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public byte[] getSoBody() {
        byte[] arrby;
        int n;
        int n2;
        block14 : {
            int n3 = this.c;
            n2 = n = 2130903040;
            switch (n3 % 6) {
                default: {
                    n2 = n;
                    break;
                }
                case 5: {
                    n2 = 2130903045;
                    break;
                }
                case 4: {
                    n2 = 2130903044;
                    break;
                }
                case 3: {
                    n2 = 2130903043;
                    break;
                }
                case 2: {
                    n2 = 2130903042;
                    break;
                }
                case 1: {
                    n2 = 2130903041;
                }
                case 0: 
            }
            byte[] arrby2 = null;
            try {
                InputStream inputStream = this.getResources().openRawResource(n2);
                arrby = new byte[inputStream.available()];
                inputStream.read(arrby);
                n = arrby.length;
                if (n != -1) break block14;
                return null;
            }
            catch (Exception exception) {
                return arrby2;
            }
        }
        n2 = n - 4;
        n = MainActivity.byteArrayToInt(Arrays.copyOfRange(arrby, n2, n));
        try {
            return Arrays.copyOfRange(arrby, n, n2);
        }
        catch (Exception exception) {
            return null;
        }
    }

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    public String getSoPath(String string2, String string3) {
        String string4;
        Object object;
        CharSequence charSequence;
        string4 = "";
        try {
            object = this.getPackageManager();
            charSequence = this.getPackageName();
        }
        catch (Exception exception) {
            return null;
        }
        try {
            object = object.getPackageInfo((String)charSequence, (int)0).applicationInfo.dataDir;
            string4 = object;
        }
        catch (Exception exception) {}
        super();
        charSequence.append(string4);
        charSequence.append(string3);
        super(charSequence.toString());
        if (!object.exists()) {
            object.mkdir();
        }
        object = new Object();
        object.append(string4);
        object.append(string3);
        object.append("/lib");
        object.append(string2);
        object.append(".so");
        return object.toString();
    }

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    public void onCreate(Bundle bundle) {
        Object object;
        TextView textView;
        TextView textView2;
        String[] arrstring;
        TextView textView3;
        int n;
        Serializable serializable;
        super.onCreate(bundle);
        serializable = new File(this.getApplicationInfo().nativeLibraryDir);
        this.setContentView(2130837504);
        this.e = new Random().nextInt(this.a - this.b + 1) + this.b;
        textView3 = (TextView)this.findViewById(2130771974);
        textView2 = (TextView)this.findViewById(2130771971);
        bundle = (TextView)this.findViewById(2130771970);
        textView = (TextView)this.findViewById(2130771973);
        arrstring = (String[])this.findViewById(2130771972);
        arrstring = new String[]{"", "", "", "", ""};
        for (n = 0; n < 4; ++n) {
            arrstring[n] = "olololo";
        }
        object = this.getPackageManager();
        String string2 = this.getPackageName();
        try {
            object = object.getPackageInfo((String)string2, (int)0).applicationInfo.dataDir;
        }
        catch (Exception exception) {}
        try {
            object = Runtime.getRuntime().exec("su");
            serializable.getAbsolutePath();
            object.waitFor();
            super();
            serializable.append("success su ");
            serializable.append(String.valueOf(0));
            textView3.setText((CharSequence)serializable.toString());
        }
        catch (Exception exception) {
            object = new StringBuilder();
            object.append(exception.getLocalizedMessage());
            object.append(" ");
            object.append(String.valueOf(0));
            textView3.setText((CharSequence)object.toString());
        }
        if (System.getProperty("os.arch").equalsIgnoreCase("armeabi-v7a")) {
            System.loadLibrary("native-lib");
        } else {
            for (n = 0; n < 4; ++n) {
                arrstring[n] = "olololo";
            }
        }
        textView3.setText((CharSequence)arrstring[0]);
        textView2.setText((CharSequence)arrstring[1]);
        bundle.setText((CharSequence)arrstring[2]);
        textView.setText((CharSequence)arrstring[3]);
    }
}
