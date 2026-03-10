import { useState } from "react";

export default function Notes() {
  const [heading, setheading] = useState("");
  const [detail, setdetail] = useState("");
  const [note, setnote] = useState([]);
  const handleAdd= () =>{
    if(!heading.trim()) return;
    setnote([...note,{id: Date.now(),heading,detail}]);
    setheading("");
    setdetail("");}
    const handleDelete = (id) =>{
      setnote(note.filter((note)=> note.id !==id));
    };
  
  return (
    <div className='h-screen bg-black text-white'>
      <div className='flex justify-between items-start gap-3.5 p-10'>
      <div className='flex gap-4 w-1/2 items-start flex-col '>
        <input type="text" placeholder="HEADING" 
        value={heading} 
        onChange={(e)=>setheading(e.target.value)}
        className='px-5 w-full py-2 border-2 rounded '/>

        <textarea 
        type="text" placeholder="DETAILS" value={detail}
        onChange={(e)=>setdetail(e.target.value)}
        className="px-5 w-full py-2 border-2 rounded" />
        <button type="button" onClick={handleAdd} className='px-5 w-full py-2 border-2 rounded bg-white text-black'>ADD NOTE</button>
      </div>
      <img className='rotate-y-180 h-80' src="https://png.pngtree.com/png-vector/20221230/ourmid/pngtree-making-notes-and-writing-diary-concept-png-image_6544498.png" alt="" />
      </div>
      {note.length > 0 && <hr className='border-zinc-700 mx-10' />}
    {note.length > 0 && (
      <div className='p-10 grid grid-cols-3 gap-4'>
    {note.map((note) => (
      <div key={note.id}className='bg-zinc-900 border border-zinc-700 rounded-lg p-4 mb-4'>
        <h2 className='font-bold text-lg uppercase'>{note.heading}</h2>
        <p className='text-zinc-400 text-sm mt-2'>{note.detail}</p>
        <button onClick={()=> handleDelete(note.id)}
          className="mt-3 text-red-400 text-xs border w-full border-red-400 px-3 py-1 rounded hover:bg-red-400 hover:text-white transition-colors"> DELETE</button>
      </div>
    ))}
  </div>
)}
</div>
  );
}