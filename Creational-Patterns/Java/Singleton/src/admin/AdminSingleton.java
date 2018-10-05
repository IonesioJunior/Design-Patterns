package admin;

public enum AdminSingleton {
    INSTANCE;

    private String login;
    private String password;

    public boolean checkCredentials(String login, String password)
    {
        return ( this.login == login && this.password == password );
    }
    
    public void setLogin(String login){
        this.login = login;
    }

    public void setPassword(String password){
        this.password = password;
    }
}
