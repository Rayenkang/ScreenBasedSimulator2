package CH4;

import java.util.ArrayList;

public class Solution07 {
	ArrayList<Project> before;
	
	
	
	class Project{
		ArrayList<Project> depend;
	}
	
	public ArrayList<Project> inorder(ArrayList<Project> readyforsort){
		ArrayList<Project> pre = readyforsort;
		ArrayList<Project> output = new ArrayList<Project>();
		while(!pre.isEmpty()){
			Project addone = checknodepend(pre);
			if(addone == null){
				System.out.println("wrong project denpendency");
				return null;
			}
			output.add(addone);
			deleteP(pre,addone);
				
		}
		return output;
				
	}
	
	public Project checknodepend(ArrayList<Project> p){
		for(Project current:p){
			if(current.depend == null)return current;
			
		}
		return null;
	}
	
	public ArrayList<Project> deleteP(ArrayList<Project> p,Project d){
		for(Project current:p){
			if(current.depend.contains(d)) current.depend.remove(d);
		}
		p.remove(d);
		return p;
	}
	
	
	public void addDepend(ArrayList<Project> plist,Project p, Project s){
		for(Project current:plist){
			if(current == p)current.depend.add(s);
		}
	}
	
	
	
}
